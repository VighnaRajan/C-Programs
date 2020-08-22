#include"stdio.h"
#include"conio.h"

struct student
{
  int rno;
  char nam[20];
  int m1,m2;
};

void main()
{
  struct student s[10];
  int n,i;
  clrscr();
  printf("No.of students :");
  scanf("%d",&n);
  clrscr();
  printf("---------------------------------------------------\n");
  printf("| Reg.No | Name                 | Mark-1 | Mark-2 |\n");
  printf("---------+----------------------+--------+---------\n");
  for (i=0;i<n;i++)
  {
    printf("|");
    gotoxy(3,i+4);
    scanf("%d",&s[i].rno);
    gotoxy(10,i+4);printf("| ");
    scanf("%s",s[i].nam);
    gotoxy(33,i+4);printf("| ");
    scanf("%d",&s[i].m1);
    gotoxy(42,i+4);printf("| ");
    scanf("%d",&s[i].m2);
    gotoxy(51,i+4);printf("|\n");
  }
  printf("---------------------------------------------------\n");
  getch();
}