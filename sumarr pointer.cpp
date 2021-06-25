#include<stdio.h>
void getarr(int*,int);
void putarr(int*,int);
int sumarr(int*,int);
int main()
{
	int a[10];
	int n,sum;
	printf("Enter the size of array:");
	scanf("%d",&n);
	if(n<=10){
	printf("Enter %d elements in Array:\n",n);
	getarr(a,n);
	printf("Your entered array:");
	putarr(a,n);
	sum=sumarr(a,n);
	printf("\nSUM = %d",sum);
	}
	else{
	printf("size exceeded");
	}
	return 0;
}
void getarr(int *a,int n)
{
	int i;
	for(i=0; i<n; i++)
	scanf("%d",(a+i));	
}
void putarr(int *a,int n)
{
	int i;
	for(i=0; i<n; i++)
	printf("%d ",*(a+i));	
}
int sumarr(int *a,int n)
{
	int i,sum=0;
	for(i=0; i<n; i++)
	sum+=*(a+i);
	return sum;	
}
