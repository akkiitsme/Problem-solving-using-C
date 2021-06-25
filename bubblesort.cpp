#include <stdio.h>
#include<stdlib.h>
void getarr(int[],int);
void putarr(int[],int);
void swap(int*,int*);
void bubblesort(int[],int); 
int main() 
{ 
	int a[6];
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter 6 elements in an array:"); 
    getarr(a,n);
    bubblesort(a,n); 
    printf("Sorted array: \n"); 
    putarr(a,n); 
    return 0; 
}
void getarr(int a[],int size)
{
	int i;	
	for(i=0; i<size; i++)	
	scanf("%d",&a[i]); 
}  
void putarr(int a[],int size) 
{ 
    int i; 
    for(i=0; i<size; i++) 
    printf("%d ",a[i]); 
    printf("\n"); 
}
void swap(int*x,int*y) 
{ 
    int temp=*x; 
    *x=*y; 
    *y=temp; 
} 
void bubblesort(int a[],int n) 
{ 
	int i,j; 
	for (i = 0; i<n-1; i++)          
	for (j = 0; j<n-i-1; j++)  
    if (a[j]>a[j+1]) 
    swap(&a[j], &a[j+1]); 
} 

