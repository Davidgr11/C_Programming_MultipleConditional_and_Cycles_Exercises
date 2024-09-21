#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=0;
    float val, total=0;
    while(cont<10)
    {
         printf("Dame la calificacion\n");
         scanf("%f", &val);
         if(val>=1 && val<=10)
            {
                cont=cont+1;
                total=total+val;
            }
            else
            {
                printf("Rango erroneo\n");
            }
    }
    total=total/10;
    printf("El promedio es\t%f", total);
    return 0;
}
