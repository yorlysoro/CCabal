static unsigned long int Siguiente = 1;

int rand0(void)
{
	Siguiente = Siguiente * 1103515245 + 12345;
	
	return (unsigned int) (Siguiente/65536) % 32768;
}
