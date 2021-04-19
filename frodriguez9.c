#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char string[20]= "hello world";
	char string1[]= "hello world";
	char string2[20]= {'h','e','l','l','o','\0'};
	char c;
	int y,i=0;
	double x=0;
	char *pntr;

	printf("string = %s \n",string);
	printf("string1 = %s \n",string1);
       	printf("string2= %s \n",string2);
	puts("enter a string no longer than 19 char");
 	fgets(string,19,stdin);
	printf("you typed  %s \n",string);

	strcpy(string1,string);
	printf("%s is in string1 now \n",string1);





	for(i=0;i<20;i++)
	{
		if (islower(string[i]))	
		{
			printf("%c is lower \n",string[i]);
			string[i]=toupper(string[i]);
		}	
		else
		{
			printf("%c is not lower \n",string[i]);
			y = string[i]-48;
			printf("%d is the number value \n",y);
		}

		
	}
	puts(string);
	for(i=0;i<20;i++)
	{
		printf("%d is %c\n",string[i],string[i]);
	}


	x= strtod(string,&pntr);
	printf("%lf = number and %s is new string",x,pntr);

	while((c=getchar()) != '\n')
	{
		string[i++]=c;
	}
	printf("you typed%s \n ",string);
	
	return EXIT_SUCCESS;	


}
