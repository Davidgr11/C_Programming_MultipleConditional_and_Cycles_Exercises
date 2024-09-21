#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra,letra1;
    for (letra='z';letra>='a';letra--)
    {
        for (letra1='a';letra1<=letra;letra1++)
        {
                 printf("%c ",letra1);
        }
        printf("\n");
    }
    return 0;
}
