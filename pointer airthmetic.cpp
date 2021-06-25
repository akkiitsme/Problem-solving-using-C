#include<stdio.h>
int main()
{
	int a,b;
	int *p,*q;
	int sum,sub,mult,divi;
	printf("Enter any two numbers A and B:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	//addition
	sum=*p+*q;
	printf("Sum = %d",sum);
	//substraction
	sub=*p-*q;
	printf("\nSub = %d",sub);	
	//multiplication
	mult=*p**q;
	printf("\nMult = %d",mult);
	//Division
	divi=*p / *q;
	printf("\nDivi = %d",divi);
	return 0;
}
