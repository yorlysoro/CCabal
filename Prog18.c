#include <stdio.h>

#define BLURB "Imitacion autentico"

int main(void)
{
        printf("/%2s/\n", BLURB);
        printf("/%26s/\n", BLURB);
        printf("/123456789012345678901234567890/\n");
        printf("/%26.5s/\n", BLURB);
        printf("/123456789012345678901234567890/\n");
        printf("/%-26.5s/\n", BLURB);
        
        return 0;
}
