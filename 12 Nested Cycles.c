#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opc;
    int num1,num2,cont,suma,mayor,menor;
    float promedio;
    printf("MENU \n");
    do
    {
        printf("\n a. Restas sucesivas\n b. Potencia\n c. Promedio, Mayor y Menor\nd. Salir");
        fflush(stdin);
        scanf("%c",&opc);
        switch(opc)
        {
            case 'a': case 'A': cont=0;
                            printf("\n Ingresa dos valores");
                            scanf("%d%d",&num1,&num2);
                            while(num1>=num2)
                            {
                                num1=num1-num2;
                                cont=cont+1;
                            }
                            printf("\n El cociente es %d y el residuo es %d ",cont,num1);
                            break;
            case 'b': case 'B':cont=1;
                             printf("\n Ingresa base y exponente");
                             scanf("%d%d",&num1,&num2);
                             for(;num2>0;num2--)
                             {
                               cont=cont*num1;
                             }
                             printf("\n La potencia es %d ",cont);
                             break;
            case 'c': case 'C':mayor=0;
                            menor=9999999;
                            cont=0;
                            suma=0;
                            printf("\n Ingresa un numero ");
                            scanf("%d",&num1);
                            while(num1!=0)
                            {
                                suma=suma+num1;
                                cont++;
                                if (num1>mayor)
                                {
                                    mayor=num1;
                                }
                                if(num1<menor)
                                {
                                    menor=num1;
                                }
                                printf("\n Ingresa un numero 0 para salir");
                                scanf("%d",&num1);
                            }
                            promedio=(float)suma/cont;
                            printf("\nValor mayor %d Valor Menor %d Promedio %f",mayor,menor,promedio);
                            break;
                case 'd':case 'D': printf("\n Hasta luego");
                           break;
                default:printf("\n Opcion invalida");
        }
    }while(opc!='d' && opc!='D');
    return 0;
}
