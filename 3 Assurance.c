#include <stdio.h>
#include <stdlib.h>

int main()
{

    char modelo,color,factura;
    float s=0,iva;
    int edad,tiempo;

    printf("\n Ingresa el modelo del auto \n");
    scanf("%c",&modelo);
    printf("\n Ingresa el color del auto ");
    fflush(stdin);
    scanf("%c",&color);

    switch(modelo)
    {
        case 'a': case 'A': if(color=='c'|| color =='C')
                             {
                                 s=3800;
                             }
                             else
                             {
                                 s=4350;
                             }
                            break;
        case 'b': case 'B': if (color=='c'|| color=='C')
                            {
                                s=4950;

                            }
                            else
                            {
                                s=5250;
                            }
                            break;
        case 'c':case 'C': if (color =='c'|| color == 'C')
                            {
                                s=7300;
                            }
                            else
                            {
                                s=8100;
                            }
                            break;
        default:s=0;
    }
    if (s>0)
    {
        printf("\n Edad");
        scanf("%d",&edad);
        if (edad<20)
        {
            s=s*1.10;
        }
        else
        {
            if (edad>=60)
            {
                s=s*1.15;
            }
        }
        printf("\n Cuanto tiempo tienes conduciendo ? ");
        scanf("%d",&tiempo);
        if (tiempo<2)
        {
            s=s*1.15;
        }
        printf("\n Deseas factura 's' 'n'");
        fflush(stdin);
        scanf("%c",&factura);
        if (factura =='s'|| factura =='S')
        {
            iva=s*.16;
        }
        else
        {
            iva=0;
        }
        printf("\n Total del seguro \n\t Precio %f \n \t IVA %f\n\t Total %f\n",s,iva,s+iva);

    }
    else
    {
        printf("\n No se puede calcular el costo porque el Modelo no existe");
    }

    return 0;
}
