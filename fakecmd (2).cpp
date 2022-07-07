#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	std::string command;
	SetConsoleTitle("Fake CMD v1");
	printf("Welcome to Fake CMD!\nType'help'to enter into help mode.\n");
	for (;;) {
		command = "";
		printf("\n");
		printf("> ");
		std::cin >> command;
		if (command == "cmd-mode") {
			system("cmdmode.exe");
		} else if (command == "help") {
			printf("Help mode\n1:'cmd-mode' Enter into CMD Mode\n2:'dir' Display detailed information about files in a directory\n3:'color-<number 1-5>' Change window text colour\nnumber 1 = Dark Blue\nnumber 2 = Green\nnumber 3 = Light Blue\nnumber 4 = Red\nnumber 5 = Dark Purple\nnumber 0 = default\n4:'exit' Close this program\n5:'clear' Clear window text\n6:'new-window' Start a new Fake CMD window\nHelp mode off.\n");
		} else if (command == "dir") {
			system("dir");
			printf("\n");
		} else if (command == "color-1") {
			system("color 1");
		} else if (command == "color-2") {
			system("color 2");
		} else if (command == "color-3") {
			system("color 3");
		} else if (command == "color-4") {
			system("color 4");
		} else if (command == "color-5") {
			system("color 5");
		} else if (command == "exit") {
			printf("Closing FAKE CMD...");
			Sleep(1000);
			return 0;
		} else if (command == "color-0") {
			system("color");
		} else if(command == "clear") {
			system("cls");
		} else if(command == "new-window") {
			system("fakecmd.exe");
		} else {
			printf("Error command!");
		}
	}
}
