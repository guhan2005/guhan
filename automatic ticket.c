#include<stdio.h>
int main()
{
	int tic,amt,bal,cul;
	printf("enter the tickets:");
	scanf("%d",&tic);
	printf("enter the amount");
	scanf("%d",&amt);
	if(tic%5==0)
	{
	         
		 cul=amt*ticket;
		       printf("no of ticket received%d",cul);
		
	else
	   printf("not a valid tic");
	   
	bal=tic-cul;
	printf("balance amt%d",bal);   
	}
	return 0;
}
