#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0, val;
    char continuar='s';
    while(continuar=='s')
    {
        printf("Dame un valor\n");
        scanf("%d", &val);
        sum=sum+val;
        printf("Para continuar ingresa 's'\n");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    printf("El total de la suma es\t%d", sum);
    return 0;
}
