#include <stdio.h>

int main(void)
{
	int xor(int a, int b);
	const int TRUE = 1, FALSE = 0;
	
	int Examen = 4;
	
	printf("Operadores logicos\n\n");
	printf("TRUE || FALSE = |%i|\n", TRUE || FALSE);
	printf("TRUE && FALSE = |%i|\n", TRUE && FALSE);
	printf("(Examen > 2) && (Examen < 15) = |%i|\n", (Examen > 2) && (Examen < 15));
	printf("(Examen > 2) && (Examen > 15) = |%i|\n", (Examen > 2) && (Examen > 15));
	printf("(Examen > 2) || (Examen < 15) = |%i|\n", (Examen > 2) || (Examen < 15));
	printf("(Examen > 2) || (Examen > 15) = |%i|\n", (Examen > 2) || (Examen > 15));
	printf("(Examen < 2) || (Examen > 15) = |%i|\n", (Examen < 2) || (Examen > 15));
	
	printf("!TRUE = |%i|\n", !TRUE);
	printf("!FALSE = |%i|\n", !FALSE);
	
	printf("TRUE xor FALSE = |%i|\n", xor(TRUE, FALSE));
	printf("TRUE xor TRUE = |%i|\n", xor(TRUE, TRUE));
	printf("FLASE xor TRUE = |%i|\n", xor(FALSE, TRUE));
	printf("FLASE xor FALSE = |%i|\n", xor(FALSE, FALSE));
	
	return 0;
}

int xor(int a, int b)
{
	return (a || b) && !(a && b);
}
