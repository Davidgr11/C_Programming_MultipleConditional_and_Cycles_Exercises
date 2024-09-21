#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, r, op;
    printf("1.Suma 2.Resta 3.Multiplicación 4.Salir\n");
    scanf("%d", &op);
    printf("Dame dos valores\n");
    scanf("%d %d", &a, &b);
    switch(op)
    {
        case 1: r=a+b;
                break;
        case 2: r=a-b;
                break;
        case 3: r=a*b;
                break;
        case 4: printf("Adios");
                r=0;
                break;
        default: printf("Operacion invalida\n");
                 r=0;
    }
    if(r!=0)
    {
        printf("Resultado\t%d", r);
    }
    return 0;
}
