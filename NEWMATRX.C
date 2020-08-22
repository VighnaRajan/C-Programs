#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5][5],r1,c1,i,j;
 clrscr();
 printf("Enter row limit =");
 scanf("%d",&r1);
 printf("Enter column limit =");
 scanf("%d",&c1);
 for (i=0;i<r1;i++)
   a[i][c1]=0;
 for (j=0;j<c1;j++)
   a[r1][j]=0;
 printf("Enter matrix A elements=");
 for (i=0;i<r1;i++)
 {
  for (j=0;j<c1;j++)
  {
   scanf("%d",&a[i][j]);
   a[i][c1]=a[i][j]+a[i][c1];
   a[r1][j]=a[i][j]+a[r1][j];
   a[r1][c1]=a[i][j]+a[r1][c1];
  }
 }
 printf("New matrix=");
 for(i=0;i<=r1;i++)
 {
  for (j=0;j<=c1;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
getch();
}