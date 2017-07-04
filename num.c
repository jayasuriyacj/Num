#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0;
clrscr();
printf("\n enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n sum is %d",n,sum);
sum=sum+i;
}
getch();
}
