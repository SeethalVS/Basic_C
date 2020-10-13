
#include<stdio.h>
void main()
{
	int feb1,feb2,feb3,limit,i;
	printf("enter the limit:");
	scanf("%d",&limit);
	printf("\nfabonacci series:\n 0 \n 1");
	feb1=0;
	feb2=1;
	while(1)
	{
		feb3=feb1+feb2;
		feb1=feb2; 
		feb2=feb3;
		if(feb3>limit)
		  break;
		printf("\n%d",feb3);
	}
}
