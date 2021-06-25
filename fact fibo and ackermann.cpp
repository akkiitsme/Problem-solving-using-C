#include<stdio.h>
#include<stdlib.h>
int main()
{
	long fact(long);
	int fib(int);
	int ackermann(int,int);
	long n;
	int i,a,b,ch;
	while(1)
	{
		printf("\n1.factorial \n2.fibonacci \n3.ackermann \n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\nEnter any number:");
			scanf("%d",&n);
			printf("factorial of %d is %d",n,fact(n));
		break;
		
		case 2:
			printf("\nenter your term:");
			scanf("%d",&n);
			printf("your all %dth term is:",n);
			for(i=0; i<n; i++){
			printf(" %d ",fib(i));
			}
		break;
		
		case 3:
			printf("\nEnter two numbers A and B:");
			scanf("%d %d",&a,&b);
			printf("\nthe number is %d",ackermann(a,b));
		break;
			
		case 4:
		exit(1);
		default:
		printf("\nwrong choice");	
		}
	}
	return 0;
}

long fact(long n)
{
	if(n>0)
	return(n*fact(n-1));
	else
	return(1);
}
int fib(int n)
{
	if(n<=1)
	return(n);
	else
	return(fib(n-1)+fib(n-2));
}
int ackermann(int a,int b)
{
	if(a==0)
	return b+1;
		else if(a>0 && b==0)
		return ackermann(a-1,1);
		else if(a>0 && b>0)
		return ackermann(a-1,ackermann(a,b-1));
}


