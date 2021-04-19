//Fernando Rodriguez
//lab 10


#include <stdlib.h>
#include <stdio.h>
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
	rptr = fopen("input.txt", "r");

	if(rptr == NULL)
	{
		printf("File could not open.\n");
	}
	else
	{
	while(choice !=4)
	{
		puts("1. to display positive balances: ");
		puts("2. to display negative balances: ");
		puts("3. to display 0 balances: ");
		puts("4. to Exit");
		printf("Enter a choice or enter 4 to exit \n");
		scanf(" %d",&choice);
	if(choice == 1)
	{
		while(!feof(rptr))
		{
		fscanf(rptr,"%d %s %lf",&account,name,&balance);
		if(balance>0)
		{
			printf("%d %s %.2lf \n",account,name,balance);
		
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
		printf("%d %s %.2lf  \n",account,name,balance);
		}
		}
	
	
	}
	else if(choice == 3)
	{
		while(!feof(rptr))
		{
		fscanf(rptr,"%d %s %lf",&account,name,&balance);
		if(balance==0)
		{
		printf("%d %s %.2lf \n",account,name,balance);
		}
		}

	
	
	}
	else if(choice == 4)
	{
	fclose(rptr);
	fclose(wptr);
	 
	
	}
	rewind(rptr);
	}

	return EXIT_SUCCESS;
	}


}
