#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10][30],t[30];
 int i,o,j;
 clrscr();
 printf("Enter the names=");
 for(i=0;i<10;i++)
 {
  scanf("%s",a[i]);
  }
 for (i=0;i<9;i++)
 {
 for (j=0;j<=9-i;j++)
 {
 if (strcmp(a[j],a[j+1])>0)
 {
   strcpy(t,a[j]);
   strcpy(a[j],a[j+1]);
   strcpy(a[j+1],t);
 }
 }
 for(o=0;o<10;o++)
 {
  printf("%d.%s\n\t",o+1,a[o]);
 }
 }
getch();
}