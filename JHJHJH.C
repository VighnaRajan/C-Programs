#include<stdio.h>
#include<conio.h>
void main()
{
int a,*p;
FILE *fp;
clrscr();
fp=fopen("add.txt","w");
printf("A=");
scanf("%d",&a);
p=&a;
*p=*p+5;
fprintf(fp,"A+5=%d",*p);
fclose(fp);
getch();
}