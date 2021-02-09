#include<stdio.h>
#include<math.h>

void main()
{
	long num;
	int size,sum=0;
	printf("Enter number : ");
	scanf("%ld",&num);
	size=log10(num)+1;
    while(size>0)
    {sum+=num%10;
    num/=10;
    size--;
	}
	printf("Sum of digits = %d",sum);
}
