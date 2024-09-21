#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dig=0, par=0, non=0, n, a;
    printf("Dame un numero\n");
    scanf("%d", &n);
    while(n!=0)
    {
        a=n%10;
        dig=dig+1;
        if(a%2==0)
        {
            par=par+a;
        }
        else
        {
            non=non+a;
        }
        n=n/10;
    }
    printf("El total de digitos son\t%d\nLa suma en pares es\t%d\nLa suma en nones es\t%d", dig, par, non);
    return 0;
}
