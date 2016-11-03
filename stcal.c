#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

extern float suma(float nums[100],int i);
extern float resta(float nums[100],int i);
extern float multiplicacion(float nums[100],int i);
extern float division(float nums[100],int i);
extern float potencia(float nums[100],int i);
extern float residuo(float nums[100],int i);

float stcal (float nums[100])
{
    int i=0,j=0;
    float res;
    char select[20];
    while(strcmp(select,"s")!=0)
    {
        printf("L:");
        gets(select);
        if(sscanf(select,"%f",&nums[i])>0)
        {
            if(i==99)
            {
             printf("No hay mas espacio en memoria\n");   
            }
            else
            {
             i++;   
            }
        }
        else
        {
            if(strcmp(select,"+")==0)
            {
                if(i==0)
                {
                    printf("No hay suficientes numeros a sumar\n");
                }
                else
                {
                    res= suma(nums,i);
                    printf("%2.2f\n",res);
                    nums[i-1]=-1;
                    nums[i-2]=res;
                    i--;
                    if(i==1)
                    {
                        i=0;
                    }
                }
            }
            else if(strcmp(select,"-")==0)
            {
               if(i==0)
                {
                    printf("No hay suficientes numeros a restar\n");
                }
                else
                {
                    res= resta(nums,i);
                    printf("%2.2f\n",res);
                    nums[i-1]=-1;
                    nums[i-2]=res;
                    i--;
                     if(i==1)
                    {
                        i=0;
                    }
                } 
            }
            else if(strcmp(select,"*")==0)
            {
               if(i==0)
                {
                    printf("No hay suficientes numeros a multiplicar\n");
                }
                else
                {
                    res= multiplicacion(nums,i);
                    printf("%2.2f\n",res);
                    nums[i-1]=-1;
                    nums[i-2]=res;
                    i--;
                     if(i==1)
                    {
                        i=0;
                    }
                } 
            }
            else if(strcmp(select,"/")==0)
            {
                if(nums[i-2]==0)
                {
                    printf("No es posible dividir entre 0\n");
                }
                else{
               if(i==0)
                {
                    printf("No hay suficientes numeros a dividir\n");
                }
                else
                {
                    res= division(nums,i);
                    printf("%2.2f\n",res);
                    nums[i-1]=-1;
                    nums[i-2]=res;
                    i--;
                     if(i==1)
                    {
                        i=0;
                    }
                } 
                }
            }
              else if(strcmp(select,"^")==0)
            {
               if(i==0)
                {
                    printf("No hay suficientes numeros para la potencia\n");
                }
                else
                {
                    res= potencia(nums,i);
                    printf("%2.2f\n",res);
                    nums[i-1]=-1;
                    nums[i-2]=res;
                    i--;
                     if(i==1)
                    {
                        i=0;
                    }
                } 
            }
             else if(strcmp(select,"r")==0)
            {
               if(i==0)
                {
                    printf("No hay suficientes numeros para el residuo\n");
                }
                else
                {
                    res= residuo(nums,i);
                    printf("%2.2f\n",res);
                    nums[i-1]=-1;
                    nums[i-2]=res;
                    i--;
                     if(i==1)
                    {
                        i=0;
                    }
                } 
            }
            else if(strcmp(select,"s")==0)
            {
                printf("Adios\n");
            }
            else 
            {
                printf("Caracter no valido\n");
            }
        }
    }
}