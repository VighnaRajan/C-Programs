#include<stdio.h>
#include<conio.h>
void sumn (int);
void main()
{
 int x,y,z,ansx,ansy,ansz;
 printf("Enter X=");
 scanf("%d",&x);
 printf("\n\nEnter Y=");
 scanf("%d",&y);
 printf("\n\nEnter Z=");
 scanf("%d",&z);
 sumn(x);
 sumn(y);
 sumn(z);
getch();
}
void sumn (int s)
{
 int t=0,i;
 for(i=0;i<=s;i++)
 {
  t=t+i;
 }
 printf("1+.....+%d=%d\n\n",s,t);
 // return (t);
}
