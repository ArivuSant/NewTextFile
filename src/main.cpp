#include<iostream>
#include<textfile.h>
#include<curses.h>
#include<stdio.h>
using namespace std;



int main(int argc, char *argv[]) {

	int kbinput;
	// Reading command line arguments

	initscr();
	
	/* Setup up the main text window */
    	WINDOW *edit = newwin(10, COLS, 2, 0);
    	keypad(edit, TRUE);
	cbreak();
	
	while (1) {
		kbinput = wgetch(edit);
		if(kbinput == 27) {
			return 1;
		}
	}

	return 0;
}