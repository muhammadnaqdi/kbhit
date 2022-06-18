# kbhit
A Unix-friendly implementation of conio's kbhit
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
