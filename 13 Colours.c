#include <stdio.h>
#include <stdlib.h>

int main()
{
    int color, num;
    printf("Ingresa el color(1-rojo, 2-azul, 3-amarillo, otro-blanco\n");
    scanf("%d", &color);
    switch(color)
    {
        case 1: printf("Rojo");
                num=100;
                break;
        case 2: printf("Azul");
                num=1000;
                break;
        case 3: printf("Amarillo");
                num=2000;
                break;
        case.: printf("Blanco");
                num=0;
                break;
    }
    printf("\nValor es\t%d", num);
    return 0;
}
