#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAXVAL 10

void pot(void)
{
    int pp[MAXVAL]={0};
    int i=0,x=0,y=0,n;
    while(x!=1)
    {
    printf("Ingrese valor a sumar ");
        scanf("%d",&n);
        if(i>MAXVAL)
        {
            printf("No se pueden ingresar mas datos\n");
        }
        else
        {
            pp[i]=n;
            i++;
        }
        printf("potencia 1)Si 2)No\n");
        scanf("%d",&x);
    }
    while(y!=2)
    {
        if(i!=0)
        {
        pp[i-1]=pow(pp[i],pp[i-1]);
            printf("Resultado: %d\n",pp[i-1]);
            i--;
        }
        else
        {
           printf("No hay mas datos que sumar\n");
        }
       printf("potencia 1)Si 2)No\n");
        scanf("%d",&y); 
    }
}
