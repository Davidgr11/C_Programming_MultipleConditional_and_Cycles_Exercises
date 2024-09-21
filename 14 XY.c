#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("Dame el valor de x\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1: y=50;
                break;
        case 5: case 7: y=2*x+3;
                        break;
        default: if(x>0)
                 {
                     y=0;
                 }
                 else
                 {
                     y=-1;
                 }
    }
    printf("El valor de y es %d", y);
    return 0;
}
