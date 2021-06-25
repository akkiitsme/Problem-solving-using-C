#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter any two numbers A and B:");
	scanf("%d%d",&a,&b);
	printf("Before swap:\n");
	printf("A=%d, B=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swap:\n");
	printf("A=%d, B=%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
