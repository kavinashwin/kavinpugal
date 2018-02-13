#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,temp,num=0;
printf("\n enter a number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
  a=n%10;
  num=(num*10)+a;
  n=n/10;
}
if(temp==num)
{
  printf("\n the given number is a palindrome");
}
else
{
  printf("\n not a palindrome");
}
getch();
return 0;
}
