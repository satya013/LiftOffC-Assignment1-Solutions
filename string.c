#include<stdio.h>
int main()
{   int i=0,count=0;
	char s[200];
	printf("Enter the string : ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{if(s[i]==' '&&s[i+1]!=' ')count++;
	
	}
	printf("No, of words : %d",count+1);
	
}

