#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
        printf("\nAlgunos limites de numeros de un sistema de 64-bits:\n");
        printf("Un byte = %d bits en este sistema.\n"
        "char minimo: %hd y char maximo: %hd\n"
        "signed char minimo: %hd y signed char maximo: %hd\n"
        "unsigned char minimo: 0 y unsigned char maximo: %hd\n"
        "short minimo: %hd y short maximo:%d\n"
        "unsigned short minimo: 0 y unsigned short maximo: %hd\n"
        "int minimo: %d e int maximo: %d"
        "unsigned int minimo: 0 y unsigned int maximo: %u\n"
        "long minimo: %ld y long maximo: %ld\n"
        "unsigned long minimo: 0 y unsigned long maximo: %lu\n"
        /*"long long minimo: %lld y long long maximo: %lld\n"
        "unsigned long long minimo: 0 y unsigned long long maximo: %llu\n"*/,CHAR_BIT, CHAR_MIN, CHAR_MAX, SCHAR_MIN, SCHAR_MAX, UCHAR_MAX, SHRT_MIN. SHRT_MAX, USHRT_MAX, INT_MIN, INT_MAX, UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, /*LLONG_MIN, LLONG_MAX, ULLONG_MAX*/);
        
        printf("Numero de digitos en la mantisa de un float: %hd\n"
        "Minimo numero de digitos significativos de un float: %hd\n"
        "Minimo exponente de base 10 de un float\n"
        "con digitos significativos completos %hd\n"
        "Maximo exponente de base 10 de una float: %hd\n"
        "Minimo float normal: %e y Maximo float normal: %e\n"
        "float epsilon = %e\n", FLT_MANT_DIG, FLT_DIG, FLT_MIN_10_EXP, FLT_MAX_10_EXP, FLT_MIN, FLT_MAX, FLT_EPSILON);
        return 0;
}
