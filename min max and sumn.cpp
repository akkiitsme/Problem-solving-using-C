#include<stdio.h>
#include<stdlib.h>
int getarr(int[]);
int putarr(int[]);
int minimum(int[]);
int maximum(int[]);
int sumarray(int[]);
int main()
{
	int a[5],min,max,sum;
	int ch,i;
	while(1)
	{
		getarr(a);
		putarr(a);		
		printf("\n1.minimum \n2.maximum \n3.sum of array \n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				min=minimum(a);
				printf("minimum element is: %d\n",min);
			break;
			case 2:
				max=maximum(a);
				printf("maximum element is: %d\n",max);
			break;
			case 3:
				sum=sumarray(a);
				printf("sum of array is: %d\n",sum);
			break;
			case 4:
			exit(1);
			default:
			printf("\nInvalid option");	
		}
		
	}
	return 0;
}
int getarr(int a[])
{	
	int i;
	printf("Enter 5 elements in an array:");
	for(i=0; i<5; i++)
	{
	scanf("%d",&a[i]);
	}
}
int putarr(int a[])
{	
	int i;
	printf("Your entered array is:");
	for(i=0; i<5; i++)
	{
	printf("%d ",a[i]);
	}
}
int minimum(int a[])
{	
	int i,min=99;
	for(i=0; i<5; i++)
	{
		if(a[i]<min)
			min=a[i];
	}
	return min;
}
int maximum(int a[])
{
	int i,max=0;
	for(i=0; i<5; i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	return max;
}
int sumarray(int a[])
{
	int i,sum=0;
	for(i=0; i<5; i++)
	{
		sum+=a[i];
	}
	return sum;
}
