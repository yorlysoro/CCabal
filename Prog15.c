#include <stdio.h>

#define PAGINAS 931

int main (void)
{
        printf("*%d*\n", PAGINAS);
        printf("*%2d*\n", PAGINAS);
        printf("*%10d*\n", PAGINAS);
        printf("*123456789012345*\n");
        printf("*%-10d*\n", PAGINAS);
        
       return 0;
}
