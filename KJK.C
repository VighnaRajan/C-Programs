#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,*p;
clrscr();
printf("Enter number of elements to be printed=");
scanf("%d",&n);
p=&a[0];
printf("\n%u\n",p);
for(i=0;i<n;i++)
{
 printf("\nAt %u Data :",p);
 scanf("%d",p);
 p++;
}
p=&a[0];
for(i=0;i<n;i++,p++)
{printf("%d\n",*p);
}getch();
}
