// GertechCppExample.cpp : Defines the entry point for the application.
//

#include "GertechCppExample.h"

using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello CMake." << endl;
	auto application = Application::create(argc, argv);
	MainWindow window = MainWindow();
	return application->run(window);
}
