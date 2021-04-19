//Fernando Rodriguez
//lab 11
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int x,y,z,i,choice=0;
	char c;
	FILE *rptr, *wptr;
	char string[100]="H";
	char *pntr;
	int ch;
	int lastL=0;

	printf("you used %d arguments",argc);
	printf("1st arg = %s \n 2nd arg = %s \n 3rd arg = %s \n",argv[0],argv[1],argv[2]);
	
	if(argc != 3)
	{
	puts("program requires 3 argument...../a.out arg2 arg3");
	}
	else
	{
	rptr=fopen(argv[1],"r");
	if(rptr == NULL)
	{
		printf("cannot open %s \n",argv[1]);
	}
	else
	{
		wptr = fopen(argv[2],"w");
		
		while(choice != 5)
		{
			puts("Choose an option below to modify your wordlist");
			puts("1. change the second letter to a capital letter");
			puts("2. Make each word lowercase except for last letter");
			puts("3. Make each word uppercase except for the last letter");
			puts("4.Duplicate each word 5 times and display the word with it's duplicate # after it.");
			puts("5. Exit program");
			puts("enter Choice");
			scanf(" %d",&choice);
			if(choice == 1)
			{		
			 while ( (ch = fgetc (rptr)) != EOF )
   			 {
      			  if (!lastL && islower(ch) )
			  {
				  
          		  ch = toupper(ch);
			  }
      			fprintf(wptr,"%c",ch); 
			  lastL = isalpha(ch);
    			}
			fputc(ch,wptr);		
			}

			else if(choice == 2)
			{
			do
			{
			ch=fgetc(rptr);
			
			ch=tolower(ch);
			
		//	if(lastL && islower(c))
	//		ch=toupper(ch);
		
	//:,(		fprintf(wptr,"%c",ch);	
			fputc(ch,wptr);
			
			}
			while(ch!=EOF);
			
			
			}
			else if(choice == 3)
			{
			do
			{
			c=fgetc(rptr);
			
			
			c=toupper(c);
			
			
			fputc(c,wptr);
			}
			while(c!=EOF);
			}
			else if(choice == 4)
			{
		//	c=fgetc(rptr);
		//	for(i=0;i>5;i++)
		//	{
		//	fprintf(wptr,"%d. %c \n",i,c);
		//	}
		//	fputc(c,wptr);
			}
			else if(choice == 5)
			{
			fclose(rptr);
			fclose(wptr);
			}
		}
	
	}
	

	}

	return EXIT_SUCCESS;
}
