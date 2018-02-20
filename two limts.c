#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("enter the two limts");
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
getch();
}
