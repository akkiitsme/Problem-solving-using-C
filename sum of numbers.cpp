#include<stdio.h>
int main() {
	int n,m;
	int sum=0;
	printf("enter any numbers:");
	scanf("%d",&n);
	while (n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("\nsum of numbers is: %d", sum);
	return 0;
}

