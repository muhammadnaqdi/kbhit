#ifndef KBHIT_H

#define KBHIT_H

#include <stdio.h>
#include <unistd.h>
#include <termios.h>

char kbhit() {
	struct termios old_tio, new_tio;
	char c;

	tcgetattr(STDIN_FILENO, &old_tio);
	new_tio = old_tio;

	new_tio.c_lflag &= ~ICANON & ~ECHO;

	tcsetattr(STDIN_FILENO, TCSANOW, &new_tio);
	
	c = getchar();
	
	tcsetattr(STDIN_FILENO, TCSANOW, &old_tio);
	
	return c;
}

#endif
