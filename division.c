#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float division(float nums[100],int i)
{
  float res=0;
    res=nums[i-1]/nums[i-2];
    return res;
}