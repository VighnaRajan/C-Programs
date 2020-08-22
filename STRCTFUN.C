#include<stdio.h>
#include<conio.h>
 struct student
{
 char name[30];
 float m1,m2,avg,tot,max;
 int regno;
};
void main()
{
 struct student s;
 clrscr();
 printf("Enter the student's names=");
 scanf("%[^\n]",s.name);
 printf("Enter the register number=");
 scanf("%d",&s.regno);
 printf("Enter mark of first subject=");
 scanf("%f",&s.m1);
 printf("Enter the mark of second subject=");
 scanf("%f",&s.m2);
 s.tot=s.m1+s.m2;
 printf("\nTotal=%f",s.tot);
 s.avg=s.tot/2;
 printf("\nAverage=%f",s.avg);
 if(s.m1>s.m2)
 printf("You have scored more marks in first subject");
 if(s.m2>s.m1)
 printf("You have scored more marks in second subject");
getch();
}