#include<stdio.h>
#include<conio.h>
Void main()
{


    int n1,n2,sub;

    scanf("%d",&n1);
    scanf("%d",&n2);
    sub=n1-n2;
    
    if(sub%2==0)
    {
    	printf("even");
	}
	else
	{
		printf("odd");
	}

    return 0;

getch();
}
