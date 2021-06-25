#include<stdio.h>
void getarr(int[5][5],int,int);
void putarr(int[5][5],int,int);
void mult(int[5][5],int[5][5],int[5][5],int,int,int);
int main()
{
	int a[5][5],b[5][5],c[5][5];
	int r1,r2,c1,c2;
	printf("Enter the value of row and column for first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("Enter the value of row and column for second matrix:");
	scanf("%d %d",&r2,&c2);
	if(c1==r2){
	printf("Enter first matrix\n");
	getarr(a,r1,c1);
	printf("Enter second matrix\n");
	getarr(b,r2,c2);
	mult(a,b,c,r1,c1,c2);
	printf("......multiplication.......\n");
	putarr(c,r1,c2);
	}
	else {
	printf("multiplication is not possible\n");
	}
	return 0;	
}
void getarr(int x[5][5],int row,int col)
{
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
		printf("enter the value %d,%d :",i,j);	
		scanf("%d",&x[i][j]);
		}
	}	
}
void putarr(int x[5][5],int row,int col)
{
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{	
		printf("%d ",x[i][j]);
		}
		printf("\n");
	}	
}
void mult(int x[5][5],int y[5][5],int z[5][5],int r1,int c1,int c2)
{
	int i,j,k;
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			z[i][j]=0;
			for(k=0; k<c1; k++)
			{
				z[i][j]=z[i][j]+x[i][k]*y[k][j];	
			}	
		} 
	}
}
