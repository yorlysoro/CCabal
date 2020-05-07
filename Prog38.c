#include <stdio.h>

int main(void)
{
	int Examen = 4;
	printf("Operadores de comparacion\n\n");
	
	if(Examen == 4)
	printf("Examen == 4 por true\n");
	else
	printf("Examen != 4 por false\n");
	
	if(Examen == '4')
	printf("Examen ==\'4\' por true\n\n");
	else
	printf("Examen !=\'4\' por false\n\n");
	
	if(Examen != 4)
	printf("Examen != 4 por true\n");
	else
	printf("Examen == %i por false\n\n", Examen);
	
	if(Examen != '4')
	printf("Examen !=\'4\' por true\n");
	else
	printf("Examen == %i por false\n\n", Examen);
	
	if(Examen > 4)
	printf("Examen > 4 por true\n\n");
	else
	printf("Examen no es > 4 por false\n\n");
	
	if(Examen > '4')
	printf("Examen >\'4\' por true\n\n");
	else
	printf("Examen no es >\'4\' por false\n\n");
	
	if(Examen < 4)
	printf("Examen < 4 por true\n\n");
	else
	printf("Examen no es < 4 por false\n\n");
	
	if(Examen < '4')
	printf("Examen <\'4\' por true\n");
	else
	printf("Examen no es <\'4\' por false\n\n");
	
	if(Examen >= 4)
	printf("Examen es >= 4 por true\n\n");
	else
	printf("Examen no es >= 4 por false\n\n");
	
	if(Examen >= '4')
	printf("Examen es >=\'4\' por true\n\n");
	else
	printf("Examen no es >=\'4\' por false\n\n");
	
	if(Examen <= 4)
	printf("Examen es <= 4  por true\n\n");
	else
	printf("Examen no es <= 4 por false\n\n");
	
	if(Examen <= '4')
	printf("Examen es <=\'4\' por true\n\n");
	else
	printf("Examen non es <=\'4\' por false\n\n");
	
	printf("El numero 4 = %i pero el numeral \'4\' = %i\n\n", 4, '4');
	
	return 0;
	
}
