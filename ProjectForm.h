#pragma once

namespace ProjectGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProjectForm
	/// </summary>
	public ref class ProjectForm : public System::Windows::Forms::Form
	{
	public:
		ProjectForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProjectForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ processButton;
	private: System::Windows::Forms::Button^ quitButton;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->processButton = (gcnew System::Windows::Forms::Button());
			this->quitButton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox1->Location = System::Drawing::Point(43, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 250);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox2->Location = System::Drawing::Point(499, 80);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(350, 250);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ProjectForm::pictureBox2_Click);
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->startButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startButton->Location = System::Drawing::Point(163, 356);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(114, 44);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &ProjectForm::onClickStart);
			// 
			// processButton
			// 
			this->processButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->processButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->processButton->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->processButton->Location = System::Drawing::Point(612, 356);
			this->processButton->Name = L"processButton";
			this->processButton->Size = System::Drawing::Size(114, 44);
			this->processButton->TabIndex = 3;
			this->processButton->Text = L"Process";
			this->processButton->UseVisualStyleBackColor = false;
			this->processButton->Click += gcnew System::EventHandler(this, &ProjectForm::onClickProcess);
			// 
			// quitButton
			// 
			this->quitButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->quitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->quitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->quitButton->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quitButton->Location = System::Drawing::Point(387, 397);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(114, 44);
			this->quitButton->TabIndex = 4;
			this->quitButton->Text = L"Quit";
			this->quitButton->UseVisualStyleBackColor = false;
			this->quitButton->Click += gcnew System::EventHandler(this, &ProjectForm::onClickQuit);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Location = System::Drawing::Point(232, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(494, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(142, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Image File";
			this->label1->Click += gcnew System::EventHandler(this, &ProjectForm::label1_Click);
			// 
			// ProjectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(892, 472);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->quitButton);
			this->Controls->Add(this->processButton);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ProjectForm";
			this->Text = L"ProjectForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void onClickStart(System::Object^ sender, System::EventArgs^ e) {
		
		//construct a PNG image
		pngwriter* image = new pngwriter(850, 750, 1.0, "Ludo.png");

		//display the full path of PNG image
		textBox1->Text = "C:\\Users\\Chris\\source\\repos\\ProjectGUI\\Ludo.png";

		//declare local variables
		int width = image->getwidth();
		int height = image->getheight();
		int centerX = width / 2;
		int centerY = height / 2;

		//draw solid background color 
		for (int i = 1; i <= width; i++) {
			for (int j = 1; j <= height; j++) {
				image->plot(i, j, 0.8235, 0.7059, 0.5490);
			}
		}

		/*********************************************************************/
		/*       Create 3 adjacent rows and 3 adjacent columns of squares    */
		/*********************************************************************/


		//declare initial variables for rows and columns of squares
		int squareSize = 50;

		//calculate number of squares in each column
		int numOfColSquares = height / squareSize; // 15 squares per column

		//x-coordinate where we start drawing squares
		int squareStartX = width / 2 - 1.5 * squareSize; 

		//loop for each column
		for (int col = 0; col < 3; col++) {

			//loop for each square in columns
			for (int row = 0; row < numOfColSquares; row++) {
				int x = squareStartX + col * squareSize;
				int y = row * squareSize;

				//check condition for red squares
				if ((col == 1 && row >= numOfColSquares - 6 && row <= numOfColSquares - 2) || (col == 2 && row == numOfColSquares - 2)) {

					//draw red squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 1.0, 0.0, 0.0); 
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

				//check conditions for yellow squares
				else if ((col == 1 && row >= numOfColSquares - 14 && row <= numOfColSquares - 10) || (col == 0 && row == numOfColSquares - 14)) {

					//draw yellow squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 1.0, 1.0, 0.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

				else {
					//draw white squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 1.0, 1.0, 1.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

			}
		}

		//calculate the number of squares that fit horizontally
		int numOfRowSquares = width / squareSize; // 17 squares in each row

		//y-coordinate where we start drawing squares
		int startY = height / 2 - 1.5 * squareSize;

		//loop for each row
		for (int row = 0; row < 3; row++) {

			//loop for each square in rows
			for (int col = 0; col < numOfRowSquares; col++) {
				int x = col * squareSize;
				int y = startY + row * squareSize;

				//check conditions for blue squares
				if ((row == 1 && col >= 1 && col <= 6) || (row == 2 && col == 1)) {

					//draw blue sqaure with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 1.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

				// Check conditions for green squares
				else if ((row == 1 && col >= 10 && col <= 15) || (row == 0 && col == 15)) {

					//draw green squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 0.0, 1.0, 0.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}
				
				else {
					//draw white squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 1.0, 1.0, 1.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}
			}
		}


		/*********************************************************************/
        /*               Create a black border around the image              */
        /*********************************************************************/
		

		//draw the top border
		image->line(1, 1, width, 1, 0.0, 0.0, 0.0);

		//draw the bottom border
		image->line(1, height, width, height, 0.0, 0.0, 0.0);

		//draw the left border
		image->line(1, 1, 1, height, 0.0, 0.0, 0.0);

		//draw the right border
		image->line(width, 1, width, height, 0.0, 0.0, 0.0);


		/*********************************************************************/
        /*                       Create the four arrows                      */
        /*********************************************************************/


		//declare initial variables for arrows (size and positions)
		int arrowSize = squareSize / 2;
		int redArrowCenterX = width / 2;
		int redArrowCenterY = height - squareSize / 2; 
		int yellowArrowCenterX = width / 2;
		int yellowArrowCenterY = squareSize / 2;
		int blueArrowCenterX = squareSize / 2;
		int blueArrowCenterY = height / 2;
		int greenArrowCenterX = width - squareSize / 2;
		int greenArrowCenterY = height / 2;
		

		//draw red arrow with black outline
		image->filledtriangle(redArrowCenterX, redArrowCenterY - arrowSize / 2, redArrowCenterX - arrowSize / 2, 
			redArrowCenterY + arrowSize / 2, redArrowCenterX + arrowSize / 2, 
			redArrowCenterY + arrowSize / 2, 1.0, 0.0, 0.0);

		image->triangle(redArrowCenterX, redArrowCenterY - arrowSize / 2, redArrowCenterX - arrowSize / 2, 
			redArrowCenterY + arrowSize / 2, redArrowCenterX + arrowSize / 2, 
			redArrowCenterY + arrowSize / 2, 0.0, 0.0, 0.0);

		//draw yellow arrow with black outline
		image->filledtriangle(yellowArrowCenterX, yellowArrowCenterY + arrowSize / 2, yellowArrowCenterX - arrowSize / 2, 
			yellowArrowCenterY - arrowSize / 2, yellowArrowCenterX + arrowSize / 2, 
			yellowArrowCenterY - arrowSize / 2, 1.0, 1.0, 0.0);

		image->triangle(yellowArrowCenterX, yellowArrowCenterY + arrowSize / 2, yellowArrowCenterX - arrowSize / 2, 
			yellowArrowCenterY - arrowSize / 2, yellowArrowCenterX + arrowSize / 2, 
			yellowArrowCenterY - arrowSize / 2, 0.0, 0.0, 0.0);

		//draw blue arrow with black outline
		image->filledtriangle(blueArrowCenterX - arrowSize / 2, blueArrowCenterY + arrowSize / 2,
			blueArrowCenterX + arrowSize / 2, blueArrowCenterY,
			blueArrowCenterX - arrowSize / 2, blueArrowCenterY - arrowSize / 2,
			0.0, 0.0, 1.0);

		image->triangle(blueArrowCenterX - arrowSize / 2, blueArrowCenterY + arrowSize / 2,
			blueArrowCenterX + arrowSize / 2, blueArrowCenterY,
			blueArrowCenterX - arrowSize / 2, blueArrowCenterY - arrowSize / 2,
			0.0, 0.0, 0.0);

		//draw green arrow with black outline
		image->filledtriangle(greenArrowCenterX + arrowSize / 2, greenArrowCenterY + arrowSize / 2,
			greenArrowCenterX - arrowSize / 2, greenArrowCenterY,
			greenArrowCenterX + arrowSize / 2, greenArrowCenterY - arrowSize / 2,
			0.0, 1.0, 0.0);

		image->triangle(greenArrowCenterX + arrowSize / 2, greenArrowCenterY + arrowSize / 2,
			greenArrowCenterX - arrowSize / 2, greenArrowCenterY,
			greenArrowCenterX + arrowSize / 2, greenArrowCenterY - arrowSize / 2,
			0.0, 0.0, 0.0);


		/*********************************************************************/
		/*       Create four small circles in each of the larger circles     */
		/*********************************************************************/


		//declare initial variables of circles (size and positions)
		int radius = 100; //radius of the 4 large circles
		int smallRadius = radius / 5; //radius of the 4 small circles
        int smallOffset = smallRadius * 2; //positions of small circles in large circles

		//create the green circle at the right bottom
		int greenCircleCenterX = width - 175;  // 175 pixels from right 
		int greenCircleCenterY = 150;  // 150 pixels from bottom

		//draw the green circle with black outline
		image->filledcircle(greenCircleCenterX, greenCircleCenterY, radius, 0.0, 1.0, 0.0);
		image->circle(greenCircleCenterX, greenCircleCenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in large green circle with black outline
		image->filledcircle(greenCircleCenterX - smallOffset, greenCircleCenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(greenCircleCenterX + smallOffset, greenCircleCenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(greenCircleCenterX - smallOffset, greenCircleCenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(greenCircleCenterX + smallOffset, greenCircleCenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		
		image->circle(greenCircleCenterX - smallOffset, greenCircleCenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(greenCircleCenterX + smallOffset, greenCircleCenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(greenCircleCenterX - smallOffset, greenCircleCenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(greenCircleCenterX + smallOffset, greenCircleCenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);

		//create the yellow circle at left bottom
		int yellowcenterX = 175; // 175 pixels from left
		int yellowcenterY = 150; //150 pixels from bottom

		//draw the yellow circle with black outline
		image->filledcircle(yellowcenterX, yellowcenterY, radius, 1.0, 1.0, 0.0);
		image->circle(yellowcenterX, yellowcenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in large yellow circle with black outline
		image->filledcircle(yellowcenterX - smallOffset, yellowcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(yellowcenterX + smallOffset, yellowcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(yellowcenterX - smallOffset, yellowcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(yellowcenterX + smallOffset, yellowcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(yellowcenterX - smallOffset, yellowcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(yellowcenterX + smallOffset, yellowcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(yellowcenterX - smallOffset, yellowcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(yellowcenterX + smallOffset, yellowcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);

		//create the red circle at right top
		int redcenterX = width - 175; // 175 pixels from the right
		int redcenterY = height - 150; //150 pixels from the top

		//draw the red circle with black outline
		image->filledcircle(redcenterX, redcenterY, radius, 1.0, 0.0, 0.0);
		image->circle(redcenterX, redcenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in large red circle with black outline
		image->filledcircle(redcenterX - smallOffset, redcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(redcenterX + smallOffset, redcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(redcenterX - smallOffset, redcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(redcenterX + smallOffset, redcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(redcenterX - smallOffset, redcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(redcenterX + smallOffset, redcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(redcenterX - smallOffset, redcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(redcenterX + smallOffset, redcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);

		//create the blue circle at left top
		int bluecenterX = 175; // 175 pixels from the left
		int bluecenterY = height - 150; // 150 pixels from the top

		//draw the blue circle with black outline
		image->filledcircle(bluecenterX, bluecenterY, radius, 0.0, 0.0, 1.0);
		image->circle(bluecenterX, bluecenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in the large green circle with black outline
		image->filledcircle(bluecenterX - smallOffset, bluecenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(bluecenterX + smallOffset, bluecenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(bluecenterX - smallOffset, bluecenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(bluecenterX + smallOffset, bluecenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(bluecenterX - smallOffset, bluecenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(bluecenterX + smallOffset, bluecenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(bluecenterX - smallOffset, bluecenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(bluecenterX + smallOffset, bluecenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);


		/*********************************************************************/
		/*           Create the triangles at the center of the image         */
		/*********************************************************************/


		//declare initial variables of the square and the 4 triangles
		int halfSide = 75; //half side of the square

		//define corners of the square
		int leftX = centerX - halfSide;
		int rightX = centerX + halfSide;
		int topY = centerY + halfSide;
		int bottomY = centerY - halfSide;

		//draw the triangles
	    //red triangle with black outline at the top
		image->filledtriangle(centerX, centerY, leftX, topY, rightX, topY, 1.0, 0.0, 0.0);
		image->triangle(centerX, centerY, leftX, topY, rightX, topY, 0.0, 0.0, 0.0);

		//green triangle with black outline at the right
		image->filledtriangle(centerX, centerY, rightX, topY, rightX, bottomY, 0.0, 1.0, 0.0);
		image->triangle(centerX, centerY, rightX, topY, rightX, bottomY, 0.0, 0.0, 0.0);

		//yellow triangle black outline at the bottom
		image->filledtriangle(centerX, centerY, leftX, bottomY, rightX, bottomY, 1.0, 1.0, 0.0);
		image->triangle(centerX, centerY, leftX, bottomY, rightX, bottomY, 0.0, 0.0, 0.0);


		//blue triangle with black outline at the left
		image->filledtriangle(centerX, centerY, leftX, topY, leftX, bottomY, 0.0, 0.0, 1.0);
		image->triangle(centerX, centerY, leftX, topY, leftX, bottomY, 0.0, 0.0, 0.0);

		/*********************************************************************/
		/*                  Display Name, ID and Art Theme                   */
		/*********************************************************************/


		char titlefont[] = "Cambria.ttc";
		int fontsize = 8;
		int angle = 0;

		// Placement just above the bottom right corner.
		int x = width - 175;
		int y = 30;

		image->plot_text(titlefont, fontsize, x, y, angle, "Name: Christian Durant-Belgrave", 0.0, 0.0, 0.0);
		image->plot_text(titlefont, fontsize, x, y - 10, angle, "ID: 400001568", 0.0, 0.0, 0.0);
		image->plot_text(titlefont, fontsize, x, y - 20, angle, "Theme: Ludo Board Layout", 0.0, 0.0, 0.0);

		image->close(); //finalize and write to PNG file


		/*********************************************************************/
        /*               Display the PNG image in PictureBox1                */
        /*********************************************************************/


		//display image in pictureBox1
		pictureBox1->Load("Ludo.png");

		//resize the image to fit picturebox1
		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
	}


	private: System::Void onClickProcess(System::Object^ sender, System::EventArgs^ e) {
		//construct a PNG image
		pngwriter* image = new pngwriter(850, 750, 1.0, "GrayscaleLudo.png");

		//display the full path of PNG image
		textBox1->Text = "C:\\Users\\Chris\\source\\repos\\ProjectGUI\\GrayscaleLudo.png";

		//declare local variables
		int width = image->getwidth();
		int height = image->getheight();
		int borderWidth = 2.5;
		int centerX = width / 2;
		int centerY = height / 2;
		int gray = 0.5;

		//draw light grey background color 
		for (int i = 1; i <= width; i++) {
			for (int j = 1; j <= height; j++) {
				image->plot_blend(i, j, 0.75, 0.95, 0.95, 0.95);
			}
		}


		/*********************************************************************/
		/*      Create 3 adjacent rows and 3 adjacent columns of squares     */
		/*********************************************************************/


		//declare initial variables for rows and columns of squares
		int squareSize = 50;

		//calculate number of squares in each column
		int numOfColSquares = height / squareSize; // 15 squares per column

		//x-coordinate where we start drawing squares
		int startX = width / 2 - 1.5 * squareSize;

		//loop for each column
		for (int col = 0; col < 3; col++) {

			//loop for each square in columns
			for (int row = 0; row < numOfColSquares; row++) {
				int x = startX + col * squareSize;
				int y = row * squareSize;

				//check condition for gray (red) squares
				if ((col == 1 && row >= numOfColSquares - 6 && row <= numOfColSquares - 2) || (col == 2 && row == numOfColSquares - 2)) {

					//draw gray (red) squares with black outline
					image->filledsquare_blend(x, y, x + squareSize, y + squareSize, 0.5, gray, gray, gray);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

				//check conditions for grey (yellow) squares
				else if ((col == 1 && row >= numOfColSquares - 14 && row <= numOfColSquares - 10) || (col == 0 && row == numOfColSquares - 14)) {

					//draw gray (yellow) squares with black outline
					image->filledsquare_blend(x, y, x + squareSize, y + squareSize, 0.5, gray, gray, gray);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

				else if((col == 0 && row > numOfColSquares - 10 && row < numOfColSquares - 6) || (col == 1 && row > numOfColSquares - 10 && row < numOfColSquares - 6) || (col == 2 && row > numOfColSquares - 10 && row < numOfColSquares - 6)) {
					//draw gray squares with no black border
					image->square(x, y, x + squareSize, y + squareSize, 0.95, 0.95, 0.95);
				}

				else {
					//draw white squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 1.0, 1.0, 1.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

			}
		}

		int startWidth = width / 2 - 3 * squareSize;  // we start a bit to the left of center
		int startHeight = height / 2;  // start at the vertical center

		//calculate the number of squares that fit horizontally
		int numOfRowSquares = width / squareSize; // 17 squares in each row

		//y-coordinate where we start drawing squares
		int startY = height / 2 - 1.5 * squareSize;

		//loop for each row
		for (int row = 0; row < 3; row++) {

			//loop for each column
			for (int col = 0; col < numOfRowSquares; col++) {
				int x = col * squareSize;
				int y = startY + row * squareSize;

				//check conditions for gray (blue) squares
				if ((row == 1 && col >= 1 && col <= 6) || (row == 2 && col == 1)) {

					//draw gray (blue) sqaure with black outline
					image->filledsquare_blend(x, y, x + squareSize, y + squareSize, 0.5, gray, gray, gray);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}

				//check conditions for gray (green) squares
				else if ((row == 1 && col >= 10 && col <= 15) || (row == 0 && col == 15)) {

					//draw gray (green) squares with black border
					image->filledsquare_blend(x, y, x + squareSize, y + squareSize, 0.5, gray, gray, gray);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);

				}

				else if ((row == 0 && col > 6 && col < 10) || (row == 1 && col > 6 && col < 10) || (row == 2 && col > 6 && col < 10)) {

					//draw gray squares with no black border
					image->square(x, y, x + squareSize, y + squareSize, 0.95, 0.95, 0.95);
			    }
			
				else {
					//draw white squares with black outline
					image->filledsquare(x, y, x + squareSize, y + squareSize, 1.0, 1.0, 1.0);
					image->square(x, y, x + squareSize, y + squareSize, 0.0, 0.0, 0.0);
				}
			}
		}


		/*********************************************************************/
		/*               Create a black border around the image              */
		/*********************************************************************/


		//draw the top border
		image->line(1, 1, width, 1, 0.0, 0.0, 0.0);

		//draw the bottom border
		image->line(1, height, width, height, 0.0, 0.0, 0.0);

		//draw the left border
		image->line(1, 1, 1, height, 0.0, 0.0, 0.0);

		//draw the right border
		image->line(width, 1, width, height, 0.0, 0.0, 0.0);


		/*********************************************************************/
		/*                       Create the four arrows                      */
		/*********************************************************************/


		//declare initial variables for arrows (size and positions)
		int arrowSize = squareSize / 2;
		int redArrowCenterX = width / 2;
		int redArrowCenterY = height - squareSize / 2;
		int yellowArrowCenterX = width / 2;
		int yellowArrowCenterY = squareSize / 2;
		int blueArrowCenterX = squareSize / 2;
		int blueArrowCenterY = height / 2;
		int greenArrowCenterX = width - squareSize / 2;
		int greenArrowCenterY = height / 2;


		//draw gray (red) arrows with black outline
		image->filledtriangle_blend(redArrowCenterX, redArrowCenterY - arrowSize / 2, redArrowCenterX - arrowSize / 2,
			redArrowCenterY + arrowSize / 2, redArrowCenterX + arrowSize / 2,
			redArrowCenterY + arrowSize / 2, 0.5, gray, gray, gray);

		image->triangle(redArrowCenterX, redArrowCenterY - arrowSize / 2, redArrowCenterX - arrowSize / 2,
			redArrowCenterY + arrowSize / 2, redArrowCenterX + arrowSize / 2,
			redArrowCenterY + arrowSize / 2, gray, gray, gray);

		//draw gray (yellow) arrow with black outline
		image->filledtriangle_blend(yellowArrowCenterX, yellowArrowCenterY + arrowSize / 2, yellowArrowCenterX - arrowSize / 2,
			yellowArrowCenterY - arrowSize / 2, yellowArrowCenterX + arrowSize / 2,
			yellowArrowCenterY - arrowSize / 2, 0.5, gray, gray, gray);

		image->triangle(yellowArrowCenterX, yellowArrowCenterY + arrowSize / 2, yellowArrowCenterX - arrowSize / 2,
			yellowArrowCenterY - arrowSize / 2, yellowArrowCenterX + arrowSize / 2,
			yellowArrowCenterY - arrowSize / 2, gray, gray, gray);

		//draw gray (blue) arrow with black outline
		image->filledtriangle_blend(blueArrowCenterX - arrowSize / 2, blueArrowCenterY + arrowSize / 2,
			blueArrowCenterX + arrowSize / 2, blueArrowCenterY,
			blueArrowCenterX - arrowSize / 2, blueArrowCenterY - arrowSize / 2, 0.5,
			gray, gray, gray);

		image->triangle(blueArrowCenterX - arrowSize / 2, blueArrowCenterY + arrowSize / 2,
			blueArrowCenterX + arrowSize / 2, blueArrowCenterY,
			blueArrowCenterX - arrowSize / 2, blueArrowCenterY - arrowSize / 2,
			gray, gray, gray);

		//draw gray (green) arrow with black outline
		image->filledtriangle_blend(greenArrowCenterX + arrowSize / 2, greenArrowCenterY + arrowSize / 2,
			greenArrowCenterX - arrowSize / 2, greenArrowCenterY,
			greenArrowCenterX + arrowSize / 2, greenArrowCenterY - arrowSize / 2, 0.5,
			gray, gray, gray);

		image->triangle(greenArrowCenterX + arrowSize / 2, greenArrowCenterY + arrowSize / 2,
			greenArrowCenterX - arrowSize / 2, greenArrowCenterY,
			greenArrowCenterX + arrowSize / 2, greenArrowCenterY - arrowSize / 2,
			gray, gray, gray);


		/*********************************************************************/
		/*       Create four small circles in each of the larger circles     */
		/*********************************************************************/


		//declare initial variables of circles (size and positions)
		int radius = 100; //radius of the 4 large circles
		int smallRadius = radius / 5; //radius of the 4 small circles
		int smallOffset = smallRadius * 2; //positions of small circles in large circles

		//create the gray (green) circle at the right bottom
		int greenCircleCenterX = width - 175;  // 175 pixels from right 
		int greenCircleCenterY = 150;  // 150 pixels from bottom

		//draw the gray (green) circle with black outline
		image->filledcircle_blend(greenCircleCenterX, greenCircleCenterY, radius, 0.5, gray, gray, gray);
		image->circle(greenCircleCenterX, greenCircleCenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in large green circle with black outline
		image->filledcircle(greenCircleCenterX - smallOffset, greenCircleCenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(greenCircleCenterX + smallOffset, greenCircleCenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(greenCircleCenterX - smallOffset, greenCircleCenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(greenCircleCenterX + smallOffset, greenCircleCenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(greenCircleCenterX - smallOffset, greenCircleCenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(greenCircleCenterX + smallOffset, greenCircleCenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(greenCircleCenterX - smallOffset, greenCircleCenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(greenCircleCenterX + smallOffset, greenCircleCenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);

		//create the gray (yellow) circle at left bottom
		int yellowcenterX = 175; // 175 pixels from left
		int yellowcenterY = 150; //150 pixels from bottom

		//draw the gray (yellow) circle with black outline
		image->filledcircle_blend(yellowcenterX, yellowcenterY, radius, 0.5, gray, gray, gray);
		image->circle(yellowcenterX, yellowcenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in large gray (yellow) circle with black outline
		image->filledcircle(yellowcenterX - smallOffset, yellowcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(yellowcenterX + smallOffset, yellowcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(yellowcenterX - smallOffset, yellowcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(yellowcenterX + smallOffset, yellowcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(yellowcenterX - smallOffset, yellowcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(yellowcenterX + smallOffset, yellowcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(yellowcenterX - smallOffset, yellowcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(yellowcenterX + smallOffset, yellowcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);

		//create the gray (red) circle at right top
		int redcenterX = width - 175; // 175 pixels from the right
		int redcenterY = height - 150; //150 pixels from the top

		//draw the gray (red) circle with black outline
		image->filledcircle_blend(redcenterX, redcenterY, radius, 0.5, gray, gray, gray);
		image->circle(redcenterX, redcenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in large gray (red) circle with black outline
		image->filledcircle(redcenterX - smallOffset, redcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(redcenterX + smallOffset, redcenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(redcenterX - smallOffset, redcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(redcenterX + smallOffset, redcenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(redcenterX - smallOffset, redcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(redcenterX + smallOffset, redcenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(redcenterX - smallOffset, redcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(redcenterX + smallOffset, redcenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);

		//create the gray (blue) circle at left top
		int bluecenterX = 175; // 175 pixels from the left
		int bluecenterY = height - 150; // 150 pixels from the top

		//draw the gray (blue) circle with black outline
		image->filledcircle_blend(bluecenterX, bluecenterY, radius, 0.5, gray, gray, gray);
		image->circle(bluecenterX, bluecenterY, radius, 0.0, 0.0, 0.0);

		//draw the small circles in the large gray (green) circle with black outline
		image->filledcircle(bluecenterX - smallOffset, bluecenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(bluecenterX + smallOffset, bluecenterY - smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(bluecenterX - smallOffset, bluecenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);
		image->filledcircle(bluecenterX + smallOffset, bluecenterY + smallOffset, smallRadius, 1.0, 1.0, 1.0);

		image->circle(bluecenterX - smallOffset, bluecenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(bluecenterX + smallOffset, bluecenterY - smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(bluecenterX - smallOffset, bluecenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);
		image->circle(bluecenterX + smallOffset, bluecenterY + smallOffset, smallRadius, 0.0, 0.0, 0.0);


		/*********************************************************************/
		/*           Create the triangles at the center of the image         */
		/*********************************************************************/


		//declare variables of the square and the 4 triangles
		int halfSide = 75; //size of the square

		//define corners of the square
		int leftX = centerX - halfSide;
		int rightX = centerX + halfSide;
		int topY = centerY + halfSide;
		int bottomY = centerY - halfSide;

		//draw the triangles
		//gray (red) triangle with black outline at the top
		image->filledtriangle_blend(centerX, centerY, leftX, topY, rightX, topY, 0.5, gray, gray, gray);
		image->triangle(centerX, centerY, leftX, topY, rightX, topY, 0.0, 0.0, 0.0);

		//gray (green) triangle with black outline at the right
		image->filledtriangle_blend(centerX, centerY, rightX, topY, rightX, bottomY, 0.5, gray, gray, gray);
		image->triangle(centerX, centerY, rightX, topY, rightX, bottomY, 0.0, 0.0, 0.0);

		// gray (yellow) triangle black outline at the bottom
		image->filledtriangle_blend(centerX, centerY, leftX, bottomY, rightX, bottomY, 0.5, gray, gray, gray);
		image->triangle(centerX, centerY, leftX, bottomY, rightX, bottomY, 0.0, 0.0, 0.0);


		//gray (blue) triangle with black outline at the left
		image->filledtriangle_blend(centerX, centerY, leftX, topY, leftX, bottomY, 0.5, gray, gray, gray);
		image->triangle(centerX, centerY, leftX, topY, leftX, bottomY, 0.0, 0.0, 0.0);


		/*********************************************************************/
		/*                 Create a gray layer over the image                */
		/*********************************************************************/


		//fill the entire image with gray layer
		for (int y = 1; y <= height; y++) {
			for (int x = 1; x <= width; x++) {
				image->plot_blend(x, y, 0.4, 0.3, 0.3, 0.3);
			}
		}


		/*********************************************************************/
        /*                  Display Name, ID and Art Theme                   */
        /*********************************************************************/


		char titlefont[] = "Cambria.ttc";
		int fontsize = 8;
		int angle = 0;

		// Placement just above the bottom right corner.
		int x = width - 175;
		int y = 30;

		image->plot_text(titlefont, fontsize, x, y, angle, "Name: Christian Durant-Belgrave", 0.0, 0.0, 0.0);
		image->plot_text(titlefont, fontsize, x, y - 10, angle, "ID: 400001568", 0.0, 0.0, 0.0);
		image->plot_text(titlefont, fontsize, x, y - 20, angle, "Theme: Ludo Board Layout", 0.0, 0.0, 0.0);


		image->close(); //finalize and write to PNG file


		/*********************************************************************/
		/*          Display the Grayscale PNG image in PictureBox2           */
		/*********************************************************************/


		//display image in pictureBox1
		pictureBox2->Load("GrayscaleLudo.png");

		//resize the image to fit picturebox2
		pictureBox2->SizeMode = PictureBoxSizeMode::Zoom;
	
	}


	private: System::Void onClickQuit(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	};


}
