# kbhit
A Unix-friendly implementation of conio's kbhit (this works a little different as it returns the pressed key). The code used in this tiny project is mainly addopted from http://shtrom.ssji.net/skb/getc.html.

# A dummy main.c
```c
#include <stdio.h>
#include "kbhit.h"

int main() {
	char c;
	
	do {
		c = kbhit();
		printf("%c", c);
	} while (c != '\n');

	return 0;
}
```
