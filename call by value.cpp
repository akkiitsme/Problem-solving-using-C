#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	int i;
	a=10;
	b=15;
	printf("before swap:\n");
	printf("a=%d, b=%d",a,b); 
	swap(a,b);
	printf("\nAfter swap:\n");
	printf("a=%d, b=%d",a,b);
	return 0;
}
void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
}
