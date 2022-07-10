#include <windows.h>
#include <iostream>
using namespace std;
int main() {
	std::string command;
	SetConsoleTitle("Fake CMD v1.2");
	printf("Welcome to Fake CMD!\nType'help'to enter into help mode.\n");
	for (;;) {
		SetConsoleTitle("Fake CMD v1.2");
		command = "";
		printf("> ");
		std::cin >> command;
		if (command == "cmd-mode") {
			system("C:\\Windows\\System32\\cmd.exe");
		} else if (command == "help") {
			printf("Help mode\n1:'cmd-mode' Enter into CMD Mode\n2:'dir' Display detailed information about files in a directory\n3:'color-<number 1-5>' Change window text colour\nnumber 1 = Dark Blue\nnumber 2 = Green\nnumber 3 = Light Blue\nnumber 4 = Red\nnumber 5 = Dark Purple\nnumber 0 = default\n4:'exit' Close this program\n5:'clear' Clear window text\n6:'new-window' Start a new Fake CMD window\n7:'new-cmd-mode-window' Start a new window that in cmd mode\n8:'easy-chat-mode' Chat with your computer with easy words\n9:'version' Fake CMD version info\n10:'update-what' See what's new in this version of Fake CMD.\n");
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
			Sleep(100);
			return 0;
		} else if (command == "color-0") {
			system("color 07");
		} else if(command == "clear") {
			system("cls");
		} else if(command == "new-window") {
			system("start fakecmd.exe");
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
						SetConsoleTitle("Fake CMD v1.2----CHATTING...");
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
			printf("Fake CMD version 1.2\nCopyright Flater Studio 2022\n");
		} else if(command == "update-what") {
			printf("What's new in this version of Fake CMD:\n1:Performance optimization.\n2:Added 2 new commands, numbered 9 and 10, enter the command 'help' to view.\n3:CMD Mode has now been adjusted to call the CMD that comes with Windows, because the original cmdmode.exe is not available on other computers (to use cmdmodee, your computer's system disk letter needs to be C:, and the system must be Windows 7 and above).\n"); 
		} else {
			printf("Error command! Please check your spell and try again.\n");
		}
	}
}
