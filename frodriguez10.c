#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int x,i,y,account,choice;
	char name[30];
	double balance;
	int z;
	FILE *wptr;
	FILE *rptr;

	wptr = fopen("output.txt","w");
	rptr = fopen("input.txt","r");
		if (rptr == NULL)
		{
			printf("File could not be open. \n");
	
		}
			else
			{
		/*
		   {
		while(!feof(rptr))
		{
		fscanf(rptr,"%d %29 %lf",&account,name,&balance);
		printf("account: %d, name %s, balance: %lf \n",account,name,balance);
		

		
		}
		*/
			while(choice != 4)
			{
				puts("1. to display positive balance");
			puts("2. to display negative balances");
			puts("3. to display 0 balances: ");
			puts("4. to Exit");
			printf("Enter a choice or enter 4 to exit\n");
			scanf("%d",&choice);
		if(choice == 1)
		{
		while(!feof(rptr))
		{
			fscanf(rptr, "%d %s %lf",&account,name,&balance);
			if(balance > 0)
			{
			printf("%d %s %lf",account,name,balance);
			
			}
		}
		}

	
		
		else if(choice == 2)
		{
			while(!feof(rptr))
			{
				fscanf(rptr, "%d %s %lf",&account,name,&balance);
					if(balance < 0)
					{
					printf("%d %s %lf",account,name,balance);
			
					}
		
		
			}
		}
		else if(choice == 3)
		{
			while(!feof(rptr))
		{
			fscanf(rptr, "%d %s %lf",&account,name,&balance);
			if(balance < 0)
			{
			printf("%d %s %lf",account,name,balance);
			
			}
		}
		
			else if(choice == 4)
			{
				while(!feof(rptr))
				{
			fscanf(rptr, "%d %s %lf",&account,name,&balance);
			if(balance )
			{
			printf("%d %s %lf",account,name,balance);
			
			}	
				
				}
			
			}
		
	

	
		
/*	printf("what is the account #?\n");
	scanf("%d",&account);
	
	
	printf("what is the name?\n");
	scanf("%29s",name);

	printf("what is the balance? \n");
	scanf("%lf",&balance);
	
	fprintf(wptr,"%d %s %.21f \n",account,name,balance);
	printf("add account type 0 to quit 1 to continue");
	scanf("%d",&y);
	
*/	
	
	 
	
	

	
			
fclose(rptr);
fclose(wptr);
return EXIT_SUCCESS;
			}

