#include<stdio.h>
void main()
{char c;
printf("Enter the character : ");
scanf("%c",&c);
switch(c)
{case 'a':
 case 'e':
 case 'i':
 case 'o':
 case 'u':
 case 'A':
 case 'E':
 case 'I':
 case 'O':
 case 'U':
         printf("%c is a vowel",c);
		 break;
default:
 printf("%c is a consonant",c);		 	
}
}
