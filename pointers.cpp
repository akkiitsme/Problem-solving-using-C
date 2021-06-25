#include<stdio.h>
int main()
{
	int *p,a[10];
	int i;
	p=a;
	printf("Enter any 5 numbers:");
	//scanning the numbers
	for(i=0; i<5; i++)
	{
	scanf("%d",(p+i));
	}
	//printing the numbers	
	for(i=0; i<5; i++)
	{
	printf("%d ",*(p+i));
	}
	return 0;
}
