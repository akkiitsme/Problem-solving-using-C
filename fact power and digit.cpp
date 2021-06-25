#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long factorial(int);
	int power(int,int);
	int sumdigit(int);
	int n,a,b;
	int ch;
	while(1)
	{
		printf("\nMENU\n");
		printf("1.Factorial\n2.Power\n3.Sum of digits\n4.Exit\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter any number:");
				scanf("%d",&n);
				printf("factorial of %d is:%d\n",n,factorial(n));
			break;
			
			case 2:
				printf("Enter any two numbers:");
				scanf("%d%d",&a,&b);
				printf("the power of %d^%d is %d\n",a,b,power(a,b));
			break;
			
			case 3:
				printf("enter any number:");
				scanf("%d",&n);
				printf("sum of %d is %d\n",n,sumdigit(n));
			break;
			
			case 4:
			exit(1);
			
			default:
			printf("\nwrong choice\n");	
		}
	}
	return 0;
}

long factorial(int n)
{
	int i,res=1;
	for(i=1; i<=n; i++)
		res=res*i;
	return (res);	
}
int power(int a,int b)
{
 	int i,res=1;
 	for(i=1;i<=b; i++)
		res*=a;
	return res; 	
}
int sumdigit(int n)
{
	int i,sum=0;
	while(n>0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;	
	}
	return sum;	
}
