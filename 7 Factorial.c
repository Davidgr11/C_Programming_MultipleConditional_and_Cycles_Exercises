#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, acum=1;
    printf("Dame el numero del que quieres su factorial\n");
    scanf("%d", &n);
    while(n>0)
    {
        acum=acum*n;
        n=n-1;
    }
    printf("El factorial es\t%d", acum);
    return 0;
}
