#include<stdio.h>
void getarr(int[5][5],int,int);
void putarr(int[5][5],int,int);
void add(int[5][5],int[5][5],int[5][5],int,int);
void sub(int[5][5],int[5][5],int[5][5],int,int);
int trans(int[5][5],int,int);
int main()
{	
	int a[5][5],b[5][5],c[5][5];
	int row,col;
	printf("Enter the size of row:");
	scanf("%d",&row);
	printf("Enter the size column:");
	scanf("%d",&col);
	if(row&&col<5){
	printf("Enter first array:\n");
	getarr(a,row,col);
	printf("Enter second array:\n");
	getarr(b,row,col);
	printf("\n ....ADDITION....\n");		
	add(a,b,c,row,col);
	putarr(c,row,col);
	printf("\n....SUBSTRACTION....\n");
	sub(a,b,c,row,col);
	putarr(c,row,col);
	printf("\n....TRANSPOSE....\n");
	trans(a,row,col);
	putarr(a,row,col);
	}
	else {
	printf("!!Oversized,Enter less than 5\n");
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
void add(int x[5][5],int y[5][5],int z[5][5],int row,int col)
{
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			z[i][j]=x[i][j]+y[i][j];
		}
	}
}
void sub(int x[5][5],int y[5][5],int z[5][5],int row,int col)
{
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			z[i][j]=x[i][j]-y[i][j];
		}
	}	
}
int trans(int x[5][5],int row,int col)
{	
	int i,j;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			x[j][i];
		}
	}	
}
