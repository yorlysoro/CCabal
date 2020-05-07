#ifndef NOMBRES_H

#define NOMBRES_H_
#define SLEN 32

struct nombres_st
{
	char nombre[SLEN];
	char apellido[SLEN];
};

typedef struct nombres_st nombres;

void obten_nombres(nombres *);
void muestra_nombres( const nombres * );

#endif
