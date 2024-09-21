#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float salario;
    char categoria;
    printf("Dame tu categoria A, a, B, b, C, c\n");
    scanf("%c", &categoria);
    printf("Dame tu edad\n");
    scanf("%d", &edad);
    switch(categoria)
    {
        case 'A': case 'a': salario=1550;
                        break;
        case 'B': case 'b': salario=1250;
                        break;
        case 'C': case 'c': salario=700;
                        break;
        default: salario=500;
    }
    salario=salario*30;
    if(edad>=60)
    {
        salario=salario*1.15;
    }
    salario=salario*0.65;
    printf("Tu salario es\t%f", salario);
    return 0;
}
