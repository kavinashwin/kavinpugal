#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp,result=0,rem;
scanf("%d%d",&a,&b);
for(int i=a+1;i<b;i++)
{
temp=i;
while(temp!=0)
{
	rem=temp%10;
	result+=rem*rem*rem;
	temp=temp/10;
}
if(i==result)
{
	printf("%d\n",i);
}
}
	return 0;
  getch();
}
