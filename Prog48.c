#include <stdio.h>
#define SPACE ' '

int main(void)
{
	char ch;
	
	while((ch = getchar()) != '\n')
	{
		if(ch == SPACE)
		putchar(ch);
		else if(ch >= 'A' && ch <= 'Z')
		putchar(ch + 32);
		else if(ch >= 'a' && ch <= 'z')
		putchar(ch - 32);
		else
		putchar(ch);
	}
	putchar(ch);
	return 0;
}
