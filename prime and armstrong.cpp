#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int prime(int);
	int armstrong(int);
	int n,ch;
	int res;
	while(1)
	{
		printf("\nMENU\n");
		printf(" 1.Prime number\n 2.Armstrong number\n 3.exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter any number:");
				scanf("%d",&n);
				res=prime(n);
				if(res==0)
				printf("\n%d is a prime number\n",n);
				else
				printf("\n%d is not a prime number\n",n);
			break;
			case 2:
				printf("\nEnter any number:");
				scanf("%d",&n);
				res=armstrong(n);
				if(res==0)
				printf("%d is an armstrong number\n",n);
				else 
				printf("%d is not an armstrong number\n",n);
			break;	
			case 3:
			exit(1);
			default:
			printf("\nwrong choice\n");				
		}
	}
	return 0;
		
}
int prime(int n)
{
	int i;
	for (i=2; i<=n/2; i++)	
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
int armstrong(int n)
{
	int i,k,sum;
	int temp=n;
	while(temp!=0)
	{
		i=temp%10;
		k=i*i*i;
		sum+=k;
		temp/=10;
	}
	if(sum==n)
	return 0;
	else
	return 1;
	
}









