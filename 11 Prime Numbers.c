#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2, num;
    printf("Dame el numero a evaluar\n");
    scanf("%d", &num);
    while(num%a!=0)
    {
        a=a+1;
    }
    printf("%d==%d", num, a);
    return 0;
}
