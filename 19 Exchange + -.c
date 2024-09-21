#include <stdio.h>
#include <stdlib.h>

int main()
{
    int band=0, n;
    float ac=0, i=1;
    printf("Dame el valor de n\n");
    scanf("%d", &n);
    while(i<=n)
    {
        if(band==0)
        {
            printf("+ 1/%.0f ", i);
            ac=ac+(1/i);
            band=1;
        }
        else
        {
            printf("- 1/%.0f ", i);
            ac=ac-(1/i);
            band=0;
        }
        i=i+1;
    }
    printf("Valor de la sumatoria\t%f", ac);
    return 0;
}
