#include "Login.h"
#include <Windows.h>
using namespace ExaminationSystem;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Login());
	
	return 0;
}