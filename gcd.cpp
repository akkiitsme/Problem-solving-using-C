#include<stdio.h>
#include<stdlib.h>
int gcd(int,int);
int main()
{
	int a,b,res;
	printf("Enter two numbers A and B:");
	scanf("%d%d",&a,&b);
	if(a&&b!=0){
	res=gcd(a,b);
	printf("GCD of %d and %d is:%d",a,b,res);
	}
	else {
	printf("Not possible");
	}
	return 0;
}
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		return gcd(a-b,b);
		else
		return gcd(a,b-a);
	}
	return a;
}
