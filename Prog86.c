#include <stdio.h>

void put1(const char *);
int put2(const char *);

int main(void)
{
	put1("Si tuviera todo el tiempo");
	put1(" en el mundo.\n");
	printf("yo contaria %d caracters.\n",
	put2("Tanto para fantasiosas delirios."));
	puts("|--------|--------|---------|--------|");
	puts("1        10       20        30       40");
	
	return 0;
}

void put1(const char * string)
{
	while(*string)
	putchar(*string++);
}

int put2(const char * string)
{
	int count = 0;
	
	while(*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');
	return(count);
}
