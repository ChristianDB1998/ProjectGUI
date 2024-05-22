#pragma once
void Copy() {
	int width, height;
	int red, green, blue;

	pngwriter* image1 = new pngwriter();
	image1->readfromfile("Ludo.png");

	pngwriter* image2 = new pngwriter();
	image2->readfromfile("GrayscaleLudo.png");

	width = image1->getwidth();
	height = image1->getheight();

	pngwriter* final = new pngwriter(width, height, 1.0, "Final.png");

	for (int x = 1; x <= width; x++) {
		for (int y = 1; y <= height; y++) {
			red = image1->read(x, y, 1);
			green = image1->read(x, y, 2);
			blue = image1->read(x, y, 3);

			final->plot_blend(x, y, 0.50 ,red, green, blue);

			if (x % 20 == 0 && y % 20 == 0) {
				final->plot(x, y, 0.0, 0.0, 0.0);
			}
		}
	}

	for (int x = 1; x <= width; x++) {
		for (int y = 1; y <= height; y++) {
			red = image2->read(x, y, 1);
			green = image2->read(x, y, 2);
			blue = image2->read(x, y, 3);

			final->plot_blend(x, y, 0.50, red, green, blue);

			if (x % 20 == 0 || y % 20 == 0) {
				final->line(x, y, x, y, 0.0, 0.0, 0.0);
			}
		}
	}

	//final->filledcircle(width / 2, height / 2, 50, 1.0, 0.0, 0.0);

	final->close();
	image1->close();
	image2->close();

}