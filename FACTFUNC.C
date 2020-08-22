#include<stdio.h>
#include<conio.h>
int fact (int f);
void main()
{
 int x,s;
 clrscr();
 printf("Enter a number=");
 scanf("%d",&x);
 s=fact(x);
 printf("The factorial of  %d =%d",x,s);
 getch();
}
int fact (int f)
{
 int m=1,n;
 for (n=1;n<=f;n++)
 {
  m=m*n;
 }
 return(m);
}