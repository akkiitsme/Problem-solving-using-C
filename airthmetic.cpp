#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,b,c,ch;
	int add(int,int);
	int sub(int,int);
	int division(int,int);
	int mult(int,int);
	do{
	printf("\nEnter the values of a and b:");
	scanf("%d %d",&a,&b);
	printf("MENU\n");
	printf(" 1.Addition\n 2.Subtraction\n 3.Division\n 4.Multiplication\n 5.Exit\n");
	printf("enter your choice:");
	scanf("%d",&ch);
	if(ch==5)
		exit(1);
	switch(ch)
	{
		case 1 :
			c=add(a,b);
			printf("\naddition of two number is: %d\n",c);
			break;
		case 2 :
			c=sub(a,b);
			printf("\nsubtraction of two number is: %d\n",c);
			break;
		case 3 :
			c=division(a,b);
			printf("\ndivision of two number is: %d\n",c);
			break;
		case 4 :
			c=mult(a,b);
			printf("\nmultiplication of two number is: %d\n",c);
			break;
		default :
			printf("invalid option\n");
			break;		
		}
	}	
	while(ch!=5);
	return 0;
}

int add( int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int division( int x,int y)
{
	return x/y;
}
int mult(int x,int y)
{
	return x*y;
}

