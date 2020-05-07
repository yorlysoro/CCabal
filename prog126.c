#include <stdio.h>

int main(void)
{
	unsigned int i, Num;
	
	puts("\nOnes complement o bitwise negacion o not operador\"~\"");
	for(Num = 4294967295; Num > 4294967284; Num--)
	printf("\t~%u o ~%x = %u o %x\n", Num, Num, ~Num, ~Num);
	puts("\nPresion <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("\nBitwiese AND \"&\"");
	for(Num = 0xffff; Num > 0xfff4; Num--)
	printf("\t(65535 & %d) o (ffff & %x) = %u o %x\n", Num, Num, 0xffff & Num, 0xffff & Num);
	
	puts("\nPresiobes <Enter> para contuinar");
	while((Num = getchar()) != '\n');
	;
	
	puts("puedes usar el operador \"%&=\" tambien");
	Num = 0xffff;
	Num &= 0xfff5;
	printf("Num &= 0xfff5 nos da %x\n", Num );
	printf("\nPresione <Enter> Para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("\nBitwise OR\"|\"");
	for(Num = 0; Num < 11; Num++);
	printf("\t(0 | %d) o (0000 | %x) = %u o %x\n", Num, Num, 0 | Num, 0 | Num);
	
	puts("\nPresione <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("Puedes usar el operador \"|=\" tambien ");
	Num = 0;
	Num |= 5;
	printf("Num |= 5 nos da %x\n", Num);
	puts("\nPresione <Enter> para continuar");
	while((Num = getchar() ) != '\n');
	;
	
	puts("\nPresione <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("\nBitwise XOR\"^\"");
	for(Num = 65535; Num > 65524; Num--)
	printf("\t(65535 ^ %d) o (ffff ^ %x) = %u o %x\n", Num, Num, 65535 ^ Num, 65535 ^ Num);
	
	puts("\nPresione <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("Puedes usar el operador\"^=\" tambien ");
	Num = 65535;
	Num = 65528;
	printf("Num ^= 65525 nos da %x\n", Num);
	puts("\nPresiona <Enter> para continuar");
	while((Num = getchar() ) != '\n');
	;
	
	puts("Existe el shift al izquierda operador \"<<\"");
	Num = 0xffffffff;
	printf("\t(Num << 1) Nos da %x y despues Num = %x\n", (Num << 1), Num);
	printf("\t(Num << 2) Nos da %x y despues Num = %x\n", (Num << 2), Num);
	printf("\t(Num << 3) Nos da %x y despues Num = %x\n", (Num << 3), Num);
	puts("\nPresione <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("Puedes usar el operador \"<<=\" tambien");
	Num = 0xffffffff;
	for(i = 1; i < 9; i++)
	{
		Num <<= i;
		printf("\tDespues de (Num << %d),"
		"Num se cambio a %08x en manera permanente\n", i, Num);
	}
	puts("\nPresiona <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("Existe el shift a la derecha operador \">>\"");
	Num = 0xffffffff;
	printf("\t(Num >> 1) nos da %x y despues Num = %x\n", (Num >> 1), Num);
	printf("\t(Num >> 2) nos da %x y despues Num = %x\n", (Num >> 2), Num);
	printf("\t(Num >> 3) nos da %x y despues Num = %x\n", (Num >> 3), Num);
	puts("\nPresiona <Enter> para continuar");
	while((Num = getchar()) != '\n');
	;
	
	puts("Puedes usar el operador \">>=\" tambien");
	Num = 0xffffffff;
	for(i = 1; i < 9; i++)
	{
		Num >>= i;
		printf("\tDespues de (Num >>= %d),"
		"Num se cambio a %08x en manera permanente\n", i, Num);
	}
	return 0;
}
