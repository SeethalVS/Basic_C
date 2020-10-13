#include<stdio.h>
void main()
{
	int limit,num=2,i;
	printf("enter a limit:");
	scanf("%d",&limit);
	printf("\nPrime numbers are:");
	do
	{
		i=2;
		do
		{
			if(num%i==0)
			{
				break;
		   }
		   i++;
		}while(i<num);
		if(num==i)
		  {
		  	printf("\n%d",i);
		  }
		num++;
	}while(num<=limit);
	printf("\nprocess completed");
}
