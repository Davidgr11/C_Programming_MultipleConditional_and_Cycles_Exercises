#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exp, acum=1;
    printf("Dame la base y el exponente\n");
    scanf("%d %d", &base, &exp);
    while(exp>0)
    {
        acum=acum*base;
        exp=exp-1;
    }
    printf("El resultado de la potencia es\t%d", acum);
    return 0;
}
