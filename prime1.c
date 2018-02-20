#include<stdio.h>
#include<conio.h>
void main()
{
int t,k,i,j,count=0;
clrscr();

	scanf("%d%d",&t,&k);
	for(i=t;i<k;i++)
	{
		count=0;
	for(j=1;j<k;j++)
	{
		if(i%j==0)
		count ++;
	}
		if(count==2)
			printf("%d",i);
		
	}
	
	return 0;
  getch();
}
