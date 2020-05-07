#include <stdio.h>

void mikado(int);

int main(void)
{
	int pooh = 2, bah = 5;
	printf("En main(), pooh = %d y &pooh = %p\n", pooh, &pooh);
	
	printf("En main(), bah = %d y &bah = %p\n", bah, &bah);
	mikado(pooh);
	
	return 0;
}

void mikado(int bah)
{
	int pooh = 10;
	printf("En mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("En mikado(), bah = %d and &bah = %p\n", bah, &bah);
}
