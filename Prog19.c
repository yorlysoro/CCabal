#include <stdio.h>

#define PAGINAS 336
#define PALABRAS 65618

int main(void)
{
        short num = PAGINAS;
        short mnum = -PAGINAS;
        
        printf("num como short: %hd y como unsigned short: %hu\n", num, num);
        printf("-num como short: %hd y como unsigned short: %hu\n", mnum, mnum);
        printf("num como int: %i y como char: %c\n", num, num);
        printf("PALABRAS como int: %d, como short: %hd, y como char: %c\n", PALABRAS, PALABRAS, PALABRAS);
        
        return 0;
}
