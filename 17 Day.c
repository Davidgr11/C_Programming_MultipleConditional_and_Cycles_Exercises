#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Dame el numero de dia de la semana\n");
    scanf("%d", &dia);
    switch(dia)
    {
        case 1: printf("Lunes");
                break;
        case 2: printf("Martes");
                break;
        case 3: printf("Miercoles");
                break;
        case 4: printf("Jueves");
                break;
        case 5: printf("Viernes");
                break;
        case 6: case 7: printf("Fin de semana");
    }
    return 0;
}
