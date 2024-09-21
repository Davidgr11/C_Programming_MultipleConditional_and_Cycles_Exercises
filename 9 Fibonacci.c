#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=1, z, term;
    printf("Dame el numero de terminos que deseas\n");
    scanf("%d", &term);
    while(term>0)
    {
        printf("%5d", x);
        z=x+y;
        x=y;
        y=z;
        term=term-1;
    }
    return 0;
}
