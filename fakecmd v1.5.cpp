#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	std::string command;
	int themeselect;
	system("color 07");
	SetConsoleTitle("Build 090420");
	printf("---------------- Fake CMD v1.5 ----------------\n\n\n\n\nPowered by ItsReal Engine\nStarting program...");
	Sleep(3990);
	system("cls");
	SetConsoleTitle("Security system");
	int psn;
	for(;;) {
		psn = 0;
		system("cls"); 
		printf("Before you use Fake CMD,please enter the passcode(Product Serial Number).\nEnter product serial number here (Tips:PSN is 114514)> ");
		std::cin >> psn;
		if(psn == 114514) {
			printf("DONE!");
			Sleep(1000);
			break;
		} else if(psn != 114514) {
			printf("ERROR!Please retry or quit!");
			Sleep(1000);
			system("cls");
		}
	}
	SetConsoleTitle("Fake CMD v1.5");
	system("cls"); 
	printf("Welcome to Fake CMD!\nType'help'to enter into help mode.\n");
	for (;;) {
		SetConsoleTitle("Fake CMD v1.5");
		command = "";
		printf("> ");
		std::cin >> command;
		if (command == "cmd-mode") {
			system("C:\\Windows\\System32\\cmd.exe");
		} else if (command == "help") {
			printf("Help mode\n1:'cmd-mode' Enter into CMD Mode\n2:'dir' Display detailed information about files in a directory\n3:'color-<number 1-5>' Change window text colour\nnumber 1 = Dark Blue\nnumber 2 = Green\nnumber 3 = Light Blue\nnumber 4 = Red\nnumber 5 = Dark Purple\nnumber 0 = default\n4:'exit' Close this program\n5:'clear' Clear window text\n6:'new-window' Start a new Fake CMD window\n7:'new-cmd-mode-window' Start a new window that in cmd mode\n8:'easy-chat-mode' Chat with your computer with easy words\n9:'version' Fake CMD version info\n10:'update-what' See what's new in this version of Fake CMD.\n11:'reset' Reset Fake CMD.\n12:'theme-setting' Set the theme for FakeCMD.\n");
		} else if (command == "dir") {
			system("dir");
			printf("\n");
		} else if (command == "color-1") {
			if(themeselect == 1) {
				system("color F1");
			} else {
				system("color 1");
			}
		} else if (command == "color-2") {
			if(themeselect == 1) {
				system("color F2");
			} else {
				system("color 2");
			}
		} else if (command == "color-3") {
			if(themeselect == 1) {
				system("color F3");
			} else {
				system("color 3");
			}
		} else if (command == "color-4") {
			if(themeselect == 1) {
				system("color F4");
			} else {
				system("color 4");
			}
		} else if (command == "color-5") {
			if(themeselect == 1) {
				system("color F5");
			} else {
				system("color 5");
			}
		} else if (command == "exit") {
			printf("Closing FAKE CMD...");
			Sleep(100);
			return 0;
		} else if (command == "color-0") {
			if(themeselect == 1) {
				system("color F0");
			} else {
				system("color 07");
			}
		} else if(command == "clear") {
			system("cls");
		} else if(command == "new-window") {
			system("start fakecmd-v1.5.exe");
			printf("Success!\n");
		} else if(command == "new-cmd-mode-window") {
			system("start C:\\Windows\\System32\\cmd.exe");
			printf("Success!\n");
		} else if(command == "easy-chat-mode") {
			system("cls");
			std::string in;
			std::string ask;
			printf("Welcome to FAKE CMD easy chat mode!");
			printf("\nYou can chat with these words below:\nhello\nhow-are-you\ndo-i-look-like-a-genius\nwho-am-i\n\nType'continute'to start.And when you want to quit,just get into chat mode and type'exit-chat'.\n");
			for(;;) {
				in == "";
				std::cin >> in;
				if(in == "continute") {
					system("cls");
					for(;;) {
						SetConsoleTitle("Fake CMD v1.5----CHATTING...");
						ask = "";
						printf("\nMessage > ");
						std::cin >> ask;
						if(ask == "hello") {
							printf("Hello there!");
						} else if(ask == "how-are-you") {
							printf("I'm  fine thanks~");
						} else if(ask == "do-i-look-like-a-genius") {
							printf("Hmm...\nYes?");
						} else if(ask == "who-am-i") {
							printf("You are my owner~");
						} else if(ask == "exit") {
							system("cls");
							break;
						} else {
							printf("I don't know what are you talking about~");
						}
					}
				}
				break;
			}
		} else if(command == "version") {
			printf("Fake CMD version 1.5\nCopyright Flater Studio 2022\n");
		} else if(command == "update-what") {
			printf("What's new in this version of Fake CMD:\n1:New themes----Light and dark,type command 'theme-setting' or type command 'help' to see more details\n2:The name of the program now added the version number\n"); 
		} else if(command == "reset") {
			printf("Resetting...");
			Sleep(100);
			system("start fakecmd-v1.5.exe");
			return 0;
		} else if(command == "theme-setting") {
		    themeselect = 0;
			printf("Please select one theme:\n1:Light theme\nOther number:Dark theme(Default)\nNotice:Set the theme will undo your text colour setting.\nEnter your choise here:");
			std::cin >> themeselect;
			if(themeselect == 1) {
				system("color F0");
			} else {
				system("color F");
			}
		} else {
			printf("Error command! Please check your spell and try again.\n");
		}
	}
}