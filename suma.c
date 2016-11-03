#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float suma(float nums[100],int i)
{
  float res=0;
    res=nums[i-2]+nums[i-1];
    return res;
}