#include <stdio.h>
#include <string.h>
#include <math.h>

extern float stack();
extern float mult();
extern float rest();
extern float divi();
extern float pot();
extern float resi();

int main(void)
{
	float val1, val2;
	float res;
	int opc;

	printf(" 1-suma, 2-mult, 3-resta, 4-division, 5-potencia, 6-residuo\n");
	scanf("%d",&opc);
	getchar();
	printf("valor 1\n");
	scanf("%f",&val1);
	printf("valor 2\n");
	scanf("%f",&val2);
	
	if ( opc == 1)
	{
		res = stack();
	}
	else
        {
        	if (opc == 2)
        	{
			res = mult();
		}
		else
        {
            if(opc== 3)
            {
                res= rest();
            }
            else
            {
               if(opc==4)
                {
                   res=divi(); 
                }
                else
                {
                    if(opc==5)
                    {
                      res=pot();  
                    }
                    else
                    {
                        if(opc==6)
                        {
                           res=resi();  
                        }
                        else
                          printf ("opcion no valida \n");  
                    }
                        
                }
            
            }
                
        }
		  
	}
    printf("el valor es %f \n",res);
        
        return 0;
	
}
