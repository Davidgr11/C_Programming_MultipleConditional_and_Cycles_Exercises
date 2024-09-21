#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fecha, dia, mes, a;
    printf("ingresa fecha (dd/mm/aa)\n");
    scanf("%d", &fecha);
    dia=fecha/10000;
    fecha=fecha%10000;
    mes=fecha/100;
    a=fecha%100;
    switch(mes)
    {
        case 1: printf("%d Enero %d", dia, a);
                break;
        case 2: printf("%d Febrero %d", dia, a);
                break;
        case 3: printf("%d Marzo %d", dia, a);
                break;
        case 4: printf("%d Abril %d", dia, a);
                break;
        case 5: printf("%d Mayo %d", dia, a);
                break;
        case 6: printf("%d Junio %d", dia, a);
                break;
        case 7: printf("%d Julio %d", dia, a);
                break;
        case 8: printf("%d Agosto %d", dia, a);
                break;
        case 9: printf("%d Septiembre %d", dia, a);
                break;
        case 10: printf("%d Octubre %d", dia, a);
                break;
        case 11: printf("%d Noviembre %d", dia, a);
                break;
        case 12: printf("%d Diciembre %d", dia, a);
    }
    return 0;
}
