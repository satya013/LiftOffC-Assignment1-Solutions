#include<stdio.h>

void  main()
{
	int arr[20],size,i,minm,max;
	printf("Enter no. of elements  : ");
	scanf("%d",&size);
	printf("Enter elements  : ");
    for(i=0;i<size;i++)scanf("%d",&arr[i]);	
    minm=arr[0];
	max=arr[0];
    for(i=0;i<size;i++)
    {
    	if(minm>arr[i])minm=arr[i];
    	if(max<arr[i])max=arr[i];
	 } 
	 printf("Largest : %d\nSmallest : %d",max,minm);
 }  
 
