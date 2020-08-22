#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float x[3],std,var,j=0,m;
 int i;
 clrscr();
 printf("Enter the Marks=");
 for(i=0;i<3;i++)
 {
  scanf("%f",&x[i]);
  j=j+x[i];
 }
 m=j/3;
 std=0;
 for(i=0;i<3;i++)
 {
  std=std+(x[i]-m)*(x[i]-m);
 }
  std=std/3;
  var=sqrt((double)std);
 printf("The mean of the numbers =%f\n",m);
 printf("Standard deviation = %f",std);
 printf("\nVariance=%f",var);
getch();
}