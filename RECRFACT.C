#include<stdio.h>
#include<conio.h>
int fact (n)
{
 if(n==1)
 return (1);
 else return (n*fact(n-1));
}
void main()
{
 int n;
 clrscr();
 printf("Enter n value=");
 scanf("%d",&n);
 printf("%d!=%d",n,fact(n));
getch();
}
