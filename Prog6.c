#include <stdio.h>

int main(void)
{
        int x = 1020;
        
        printf("dec = %d; octal = %o; hex = %x, HEX = %X\n", x,x,x,x);
        printf("dec = %d; octal = %#o; hex = %#x, HEX = %#X\n",x,x,x,x);
        return 0;
}
