#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the year\n");
scanf("%d",&a);
if(a%100!=0&&a%400!=0&&a%4==0)
printf("it is a leap year");
else
printf("it is not a leap year");
getch();
}
