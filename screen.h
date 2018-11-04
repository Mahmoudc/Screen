#include <iostream>
#include <sstream>
#include <windows.h> 
#ifndef SCREEN_H
#define SCREEN_H

using namespace std;
class Screen {
	private:
		string color;
		string text;
		string backgroundPossible[8] = {"Black", "Blue", "Green", "Aqua", "Red", "Purple", "Yellow", "White"};
		string textColor[9] = {"Black", "Gray", "Light Blue", "Light Green", "Light Aqua", "Light Red", 
		"Light Purple", "Light Yellow", "Bright White"};
	public:
		Screen(string c, string t) {
			color=c;
			text=t;
			stringstream consoleColor;
			for (int x=0;x<8;x++) {
			if (color==backgroundPossible[x] && text==textColor[0]) {
				consoleColor<<"Color "<<x<<"0";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[1]) {
				consoleColor<<"Color "<<x<<"8";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[2]) {
				consoleColor<<"Color "<<x<<"9";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[3]) {
				consoleColor<<"Color "<<x<<"A";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[4]) {
				consoleColor<<"Color "<<x<<"B";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[5]) {
				consoleColor<<"Color "<<x<<"C";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[6]) {
				consoleColor<<"Color "<<x<<"D";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[7]) {
				consoleColor<<"Color "<<x<<"E";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[8]) {
				consoleColor<<"Color "<<x<<"F";
				system(consoleColor.str().c_str());
			}
		}
//			else if (color=="Blue" && text=="Black")
		}
		Screen() {
			color="Blue";
			text="Light Purple";
		}	
		void changeColor(string c, string t)
		{
			color=c;
			text=t;
			stringstream consoleColor;
			for (int x=0;x<8;x++) {
			if (color==backgroundPossible[x] && text==textColor[0]) {
				consoleColor<<"Color "<<x<<"0";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[1]) {
				consoleColor<<"Color "<<x<<"8";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[2]) {
				consoleColor<<"Color "<<x<<"9";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[3]) {
				consoleColor<<"Color "<<x<<"A";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[4]) {
				consoleColor<<"Color "<<x<<"B";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[5]) {
				consoleColor<<"Color "<<x<<"C";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[6]) {
				consoleColor<<"Color "<<x<<"D";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[7]) {
				consoleColor<<"Color "<<x<<"E";
				system(consoleColor.str().c_str());
			}
			else if (color==backgroundPossible[x] && text==textColor[8]) {
				consoleColor<<"Color "<<x<<"F";
				system(consoleColor.str().c_str());
			}
		}
	}
	void clearScreen() {
		system("CLS");
	}
	void textSimulation(char text[]) {
	int i=0;
	text[100];
	while(text[i]!='\0') {
		cout<<text[i];
		Sleep(10);
		i++;
	}
	cout<<endl;
}
};
#endif
