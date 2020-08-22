#include<stdio.h>
#include<conio.h>
void main()
{
 char c,a[50];
 int i=0;
 clrscr();
 printf("Enter a sentence =");
 scanf("%[^\n]",a);
 while(a[i]!='\0')
 {
  c=a[i];
  if((c=='i')||(c=='a')||(c=='e')||(c=='o')||(c=='u')||(c=='I')||(c=='A')||(c=='E')||(c=='O')||(c=='U'))
  a[i]='x';
  i++;
 }
 printf("%s",a);
 getch();
}
