#include <stdio.h>

int main(void)
{
	int Num = -4;
	
	for(; Num <= 12; )
	{
		if(Num == 0)
		{
			puts("Ilegal dividir por 0, No puedo continuar");
			break;
		}
		printf("100 / %d = %f\n", Num++, (float)100 / (float)Num);
	}
	return 0;
}
