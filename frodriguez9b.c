//Lab #9
//Fernando Rodriguez
//Frodriguez116

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void caseU(char *pntr);
void caseL(char *pntr);
void vowels(char *pntr);
int m12(char *pntr,char *p,double y);
int main(void)
{
char string[21]= "H";
char c;
double y;
int i=0;
double x = 0;
char *pntr;
char *p;

pntr = string;
puts("enter a number and string no longer thsn 20 char:");
fgets(string,20,stdin);
//x= strtod(pntr,&p);
//printf("%lf",x);
caseL(pntr);
caseU(pntr);
x=m12(pntr,p,x);
printf("\n the number in the string %lf *12:  ",x);
y= x*12;
printf("%lf",y);
vowels(pntr);
}

void caseL(char *pntr)
{
	int i,x;
	printf("lower case:\n");
	for(i=0;i<20;i++)
	{
		
		if(islower(pntr[i]))
		{
		printf("%c",pntr[i]);
		}
		else
		{
		x++;
		}
						
		
	}
	


}


void caseU(char *pntr)
{
	int i,x;
	printf("\n Upper Case \n");
for(i=0;i<20;i++)
	{
		if(islower(pntr[i]))
		{
			x++;			
		}

		else
		{
		printf("%c",pntr[i]);
		
	//	printf("%d is the number value /n",y);
		}

	
	
	}



}

void vowels(char *pntr)
{
	int i,counter,z;
char entry;	

	int c=0;
counter =0;
z = 0;	


	while(*pntr != '\0')

		{
	if(*pntr == 'A'||*pntr == 'E'|| *pntr=='I' || *pntr== 'O'|| *pntr == 'U'|| *pntr == 'a'|| *pntr == 'e' || *pntr == 'i'|| *pntr == 'o' || *pntr == 'u')
	{	
	counter++;
	}
	pntr++;	
		
		}	
	printf("\n number of vowels: %d \n",counter);
	
		
}




int m12(char *pntr,char *p,double x)
{
	double y;
	int i;

x= strtod(pntr,&p);


//printf("%lf",x);		// I dont know why it only captures # when it is in the beginning
				// ex 20 Apples does 20* 12 
				// ex Apples 20 does 0*12
return x;




}		

