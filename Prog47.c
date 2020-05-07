#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int MiNum, num = 0;
	
	srand(time(NULL));
	MiNum = rand() % 4000;
	
	for( puts( "En que numero estoy pensando?"); num != MiNum;)
	{
		scanf("%d", &num);
		if(num > MiNum)
		{
			puts("Demasiado grande");
			puts("En que numero estoy pensando?");
		}
		else if(num < MiNum)
		{
			puts("Demasiado pequeña");
			puts("En que numero estoy pensando?");
		}
		else
		puts("Si, Es el\n");
	}
	return 0;
}
