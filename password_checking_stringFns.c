#include<stdio.h>
#include<string.h>
void main()
{
	char password[]="sheethal2020",userpw[20];
	int n=0,length,comparevalue;
	while(n<3)
	{
	puts("Enter your password:");
	gets(userpw);
	comparevalue=strcmp(password,userpw);
	   if(comparevalue!=0)
	   {
	    puts("The password is incorrect.");
	    n++;
	   }
	   if(n==0)
	    break;
    }
    if(comparevalue==0)
      puts("The password is correct.");
    if(n>=3)
      puts("The system is locked.");
    
}
