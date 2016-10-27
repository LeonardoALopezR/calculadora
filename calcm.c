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
	
	if ( opc == 1)
	{
		stack();
	}
	else
        {
        	if (opc == 2)
        	{
			mult();
		}
		else
        {
            if(opc== 3)
            {
                rest();
            }
            else
            {
               if(opc==4)
                {
                   divi(); 
                }
                else
                {
                    if(opc==5)
                    {
                      pot();  
                    }
                    else
                    {
                        if(opc==6)
                        {
                           resi();  
                        }
                        else
                          printf ("opcion no valida \n");  
                    }
                        
                }
            
            }
                
        }
		  
	}
        
        return 0;
	
}
