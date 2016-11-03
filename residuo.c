#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float residuo(float nums[100],int i)
{
  float div=0,mult=0,res=0;
    div=nums[i-1]/nums[i-2];
    mult=(int)div*nums[i-2];
    res=nums[i-1]-mult;
    return res;
}