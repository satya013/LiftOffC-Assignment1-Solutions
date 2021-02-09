#include<stdio.h>
void main()
{float rad,dia,cir,are;
const float pi=3.14159;
printf("Enter radius : ");
scanf("%f",&rad);
dia=rad*2;
cir=2*pi*rad;
are=pi*rad*rad;
printf("Diameter : %.2f unit\n",dia);
printf("Circumference : %.2f unit\n",cir);
printf("Area : %.2f sq.unit\n",are);
}
