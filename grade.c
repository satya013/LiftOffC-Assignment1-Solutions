#include<stdio.h>
void main()
{int phy,che,bio,math,comp,sum;
float perc;
printf("Enter marks in physics, chemistry,biology,mathematics and computer : ");
scanf("%d %d %d %d %d",&phy,&che,&bio,&math,&comp);
sum=phy+che+bio+math+comp;
perc=sum/5;
if(perc>=90)
    printf("Grade : A");
else if(perc>=80&&perc<90)
    printf("Grade : B");
else if(perc>=70&&perc<80)
    printf("Grade : C");
else if(perc>=60&&perc<70)
    printf("Grade : D");
else if(perc>=40&&perc<60)
    printf("Grade : E");
else
    printf("Grade : F");
	
}
