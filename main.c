#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

extern float stcal(float nums[100]);

int main (int argc, char *argv[])
{
  float nums[100]={-1};
    int i;
    char comp[10];
    for(i=0;i<100;i++)
    {
        nums[i]=-1;
    }
    if(argc==1)
    {
         printf("\nPara inicializar el programa es necesario escribir -i\nuna vez dentro del programa debera ingresar numeros y elegir una operacion + - * /   para salir ingrese la letra s\n");
    }
    else{
        sscanf(argv[1],"%s",comp);
    if(strcmp(comp,"-i")==0)
    {
        stcal(nums);
    }
    else
    {
         printf("\nPara inicializar el programa es necesario escribir -i\nuna vez dentro del programa debera ingresar numeros y elegir una operacion + - * /   para salir ingrese la letra s\n");
    }
    }
}