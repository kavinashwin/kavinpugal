#include<stdio.h>
#inclue<string.h>
#include<conio.h>
int main(void)

{
	int i,n,count=1;
	char a[10];
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
getch();
}
