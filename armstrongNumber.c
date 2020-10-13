#include<stdio.h>
#include<math.h>
void main()
{
	int limit,num,armstrong,rem,temp,digits,n;
	printf("enter your limit:");
	scanf("%d",&limit);
	
	for(num=1;num<=limit;num++)
	{
		temp=num;
		
		for(digits=0;temp>0;digits++)
	    {
		temp=temp/10;
	    }
	    temp=num;
	    armstrong=0;
	    while(temp>0)
	  	{
		rem=temp%10;
		armstrong=armstrong+pow(rem,digits);
		temp=temp/10;
      }
	   if(num==armstrong)
	   {
	   	printf("%d\n",num);
	   }
     }
    }
