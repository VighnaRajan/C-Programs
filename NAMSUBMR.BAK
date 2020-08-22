#include<stdio.h>
#include<conio.h>
int total (int a, int b);
float average (int a, int);
void main()
{
 char a[4][7];
 int i,s[4],c[4];
 clrscr();
 printf("Enter the names btwn 7 char =");
  for(i=0;i<4;i++)
 {
  printf("Name:");
  scanf("%s",a[i]);
   printf("\nsci=");
   scanf("%d",&s[i]);
   printf("\n mat=");
   scanf("%d",&c[i]);
 }
 clrscr();
 printf("S.No    Names   Science   C.S   Total   Average\n");
 printf("----    -----   -------   ---   -----   -------\n\n");
 for(i=0;i<4;i++)
 {
  printf("%d.\t%s\t%d\t  %d\t%d\t%f\n",i+1,a[i],s[i],c[i],total(s[i],c[i]),average(s[i],c[i]));
 }
getch();
}
int total (int a, int b)
{
 int t=a+b;
 return(t);
}
float average (int a, int b)
{
 float avrg=(a+b)/2.0;
 return(avrg);
}
