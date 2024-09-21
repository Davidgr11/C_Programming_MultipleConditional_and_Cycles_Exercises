#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bin=0, c=1, num, r;
    printf("Dame el numero a convertir\n");
    scanf("%d", &num);
    while(num!=0)
    {
        r=num%2;
        bin=bin+(r*c);
        c=c*10;
        num=num/2;
    }
    printf("En binario es\t%d", bin);
    return 0;
}
