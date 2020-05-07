#include <stdio.h>

int main(void)
{
	char ch;
	
	for (ch = 'A'; ch <= 'Z'; ch++)
	printf("El valor ASCII para \'%c\' es %d decimal y %x hexadecimal\n"
	"				\'%c\' es %d decimal y %x hexadecimal\n", ch, ch, ch, ch + 32, ch + 32, ch + 32);
	
	return 0;
}
