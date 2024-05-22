#pragma warning(disable : 4996)
#pragma comment(lib, "shell32.lib")

#pragma managed(push, off)
	#define generic GenericFromFreeTypeLibrary
		#include "pngwriter.h"
	#undef generic
#pragma managed(pop)

#include "ProjectForm.h"
#include "copy.h"
using namespace ProjectGUI;

[STAThread]

int Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ProjectForm form;
	Application::Run(% form);

	Copy();

	return 0;
}

/*
* Name: Christian Durant-Belgrave
* ID: 400001568
* Theme: Ludo Board Layout
* Description: Ludo is a strategy board game played with 2 to 4 players. 
* Link: https://www.youtube.com/watch?v=xYXj9DwKHr4 ( 2 minute video )
* 
* Names of PNGWriter Functions Utilized
* 1. plot()
* 2. plot_blend()
* 3. plot_text()
* 4. filledsquare()
* 5. fillsquare_blend()
* 6. square()
* 7. filledtriangle()
* 8. filledtriangle_blend()
* 9. triangle()
* 10. filledcircle()
* 11. filledcircle_blend()
* 12. circle()
* 13. getwidth()
* 14. getheight()
* 15. line()
* 16. close()
* 17. 
* 
* 
* 
* 
*/
