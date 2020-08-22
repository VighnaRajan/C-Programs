#include<stdio.h>
#include<conio.h>
int fact (int n)
{
 if (n==1)
 return(1);
 else return(n*fact(n-1));
}
int ncrf (int n, int r)
{
 int ncrf;
 ncrf=fact(n)/(fact(r)*fact(n-r));
 return(ncrf);
}
void main()
{
 int n, r,nr,nf,rf,nrf,ncr;
 clrscr();
 printf("Enter n value=");
 scanf("%d",&n);
 printf("Enter r value=");
 scanf("%d",&r);
 printf("%dC%d=%d",n,r,ncrf(n,r));
 getch();
}




