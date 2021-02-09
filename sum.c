#include<stdio.h>

void  main()
{    int i,size,sume=0,sumep=0;
	int arr[20];
	printf("Enter number of elements : ");
	scanf("%d",&size);
	printf("Enter  elements  : ");
	for(i=0;i<size;i++)scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	{if(arr[i]%2==0)sume+=arr[i];
	if(i%2==0)sumep+=arr[i];
	}
	printf("Sum of even elements : %d\nSum of elements of even position  : %d",sume,sumep);
}
