#include<stdio.h>
void main()
{float cel,fahr;
printf("Enter temperature in celsius :");
scanf("%f",&cel);
fahr=cel*9/5+32;
printf("%.2fC = %.2fF",cel,fahr);
}
