#include <stdio.h>
#include <stdlib.h>

float calc_abs(float);

int main()
{
float n;
printf("Enter n.");
scanf("%f",&n);
printf("|%.3f|=%.3f \n",n, calc_abs(n));

    return 0;
}
float calc_abs(float number)
{
if(number>=0)
{
return number;
}
return -number;
}
