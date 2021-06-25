#include<stdio.h>
int main() {
	int i,n,sum;
	int a=0,b=1;
	printf("enter nunber of terms:");
	scanf("%d", &n);
	printf("fibonacci series:");
	for (i=1; i<=n; ++i)
	{
		printf("%d, ", a);
		sum=a+b;
		a=b;
		b=sum;
	}
	return 0;
}
