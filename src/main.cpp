#include<iostream>
#include<curses.h>
#include<stdio.h>
#include"LinkedList.h"
using namespace std;



int main(int argc, char *argv[]) {

	//int kbinput;
	// Reading command line arguments

	/*initscr();
	
	// Setup up the main text window
    	WINDOW *edit = newwin(10, COLS, 2, 0);
    	keypad(edit, TRUE);
	cbreak();
	
	while (1) {
		kbinput = wgetch(edit);
		if(kbinput == 27) { // Key
			return 1;
		}
	}*/
	
	cTextLine line1("Internet");
	line1.InsertAt("Mine_",0);
	cout<<line1.getText()<<endl;
	line1.AppendText(" is working");
	cout<<line1.getText()<<endl;

	return 0;
}
