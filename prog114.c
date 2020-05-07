#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CNTL_Z '\032'
#define SLEN 50

int main(void)
{
	char file[SLEN], ch;
	
	FILE *fp;
	
	long count, last;
	
	printf("Escribe el nombre del archivo a usar: ");
	fgets(file, SLEN - 2, stdin);
	
	if(*(file + strlen(file) - 1) != '\n')
	{
		printf("El nombre que entrastes es demasiado largo.\n"
		"Solo %d chars MAX\n", SLEN - 2);
		exit(1);
	}
	
	else
	*(file + strlen(file) - 1) = '\0';
	
	if((fp = fopen(file, "rb") ) == NULL)
	{
		printf("No puedo abrir el archivo %s\n", file);
		exit(1);
	}
	
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	
	for(count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		if(ch != CNTL_Z && ch != '\r')
		putchar(ch);
	}
	
	putchar('\n');
	fclose(fp);
	return 0;
}
