#include<stdio.h>
int main() {
	int i,n;
	int fact=1;
	printf("enter any number:");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %d=%d", n,fact);
	return 0;
}
