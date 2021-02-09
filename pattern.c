#include<stdio.h>

void  main()
{
	int row=5,col=5,i,j;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{if(j==i||j==4-i)printf("*");
		else printf(" ");
		}printf("\n");
	}
}
 
