#include <stdio.h>

#define DOS 2
#define OW "La consistencia es el ultimo refugio de l\
os con poco imaginacion. - Osca Wilde"
#define CUATRO DOS * DOS
#define PX printf("X es %d.\n", x)
#define FMT "X es %d.\n"

int main(void)
{
	int x = DOS;
	PX;
	x = CUATRO;
	
	printf(FMT, x);
	printf("%s\n", OW);
	printf("DOS: OW\n");
	return 0;
}
