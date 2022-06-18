# kbhit
A Unix-friendly version of conio's kbhit.
The code used in this tiny project is mainly addopted from http://shtrom.ssji.net/skb/getc.html.

# A dummy main.c
```c
#include <stdio.h>
#include "kbhit.h"

int main() {
	char c;
	
	do {
		c = kbhit();
		printf("%c", c);
	} while (c != 'q');

	return 0;
}
```
