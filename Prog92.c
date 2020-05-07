#include <stdio.h>
#include <string.h>

#define TAMANO 40
#define LIM 5

int main(void)
{
	char qwords[LIM][TAMANO];
	char temp[TAMANO];
	int i = 0;
	
	printf("Escribe %d palabras que se inician con la letra c: \n", LIM);
	
	while(i < LIM)
	{
		fgets(temp, TAMANO - 2, stdin);
		if(*temp != 'c')
		{
			if(strlen(temp) < TAMANO - 2)
			*(temp + strlen(temp) - 1) = '\0';
			printf("%s no se inicia con la letra c!\n", temp);
		}
		
		else
		{
			if(strlen(temp) < TAMANO - 2)
			*(temp + strlen(temp) - 1) = '\0';
			strcpy(qwords[i], temp);
			 i++;
		 }
	 }
	 
	 puts("\nAqui esta lista de palabra aceptadas: ");
	 
	 for(i = 0;i < LIM;i++)
	 puts(qwords[i]);
	 return 0;
}
