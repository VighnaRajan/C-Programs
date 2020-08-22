#include<stdio.h>
#include<conio.h>
int fact (int f);
void main()
{
 int nf,rf,n,r,nrf,ncr,nfrf,nr;
 clrscr();
 printf("Enter the value of N=");
 scanf("%d",&n);
 printf("\n\nEnter the value of R=");
 scanf("%d",&r);
 nr=n-r;
 nf=fact(n);
 rf=fact(r);
 nrf=fact(nr);
 nfrf=nrf*rf;
 ncr=nf/nfrf;
 printf("\n\nN Factorial=%d",nf);
 printf("\n\nR Factorial=%d",rf);
 printf("\n\nN - R factorial=%d",nrf);
 printf("\n\n%dC%d =%d",n,r,ncr);
 getch();
}
int fact (int f)
{
 int x=1,y;
 for (y=1;y<=f;y++)
 {
  x=x*y;
 }
 return(x);
}