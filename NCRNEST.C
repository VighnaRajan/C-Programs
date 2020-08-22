#include<stdio.h>
#include<conio.h>
int fact(int x)
{
 int f=1,i;
 for(i=2;i<=x;i++)
 f=f*i;
// printf("\n%d!=%d\n",x,f);
 return(f);
}
int ncrval(int n, int r)
{
 int ncrf;
 ncrf=fact(n)/(fact(r)*fact(n-r));
 return(ncrf);
}
void main()
{
 int n,r,nr,nf,rf,nrf,ncr;
 clrscr();
 printf("Enter N=");
 scanf("%d",&n);
 printf("Enter R=");
 scanf("%d",&r);
 printf("%dC%d=%d",n,r,ncrval(n,r));
 getch();
}