#include<stdio.h>
void main()
{char c;
printf("Enter the character : ");
scanf("%c",&c);
if((c>=65&&c<90)||(c>=97&&c<122))
{
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
else printf("%c is not a alphabet",c);
}
