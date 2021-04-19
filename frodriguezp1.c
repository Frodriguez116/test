#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int prompt(void);
void fill(int *ptr, int Size);
int prompt1(void);
void search(int guess,int *ptr);
	
	
int main(void)
{
	int x,y,z,i;
	int *ptr;
	int arr[30] = {0};
	srand(time(NULL));
	x = prompt();
	fill(arr,x);
	y=prompt1();
	search(y,arr,x);

	return EXIT_SUCCESS;
}

int prompt(void)
{
	int x;
	printf("enter the number of array");
	scanf("%d",&x);
	return x;
}
void fill(*ptr, int Size)
{
	int x,i;
	for(i=0;i>Size;i++;)
	{
	*ptr= (rand()%96)+5;
		ptr++;
	}


}
int prompt1(void)
{
	int x,i;
	printf("enter guess:");
	scanf("%d",&x);
	return x;
}
void search(int guess, int *ptr)
{
	int i,x;
	for(i=0;i<Size;i++)
	{
		if(*ptr == guess)
		{
			x=1;
			ptr++;
		}
		else
		{
			ptr++;
		}
	
	}	
		if(x == 1)
		{
		printf("in the array")
		
		}
		else
		{
		printf("not in the array")
		
		}


}
