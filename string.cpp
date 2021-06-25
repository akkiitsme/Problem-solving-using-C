#include<stdio.h>
#include<stdlib.h>
//function declaration
int strlength(char[]);
void copystr(char[],char[]);
int revstr(char[]);
int compare(char[],char[]);
void concate(char[],char[]);
int palindrome(char[]);
//main function
int main()
{
	char str1[10],str2[10];
	int c,ch;
	printf("Enter first string:");
	gets(str1);
	printf("Enter second string:");
	gets(str2);
	while(1)
	{
		printf("\n1.Length of string \n2.Copy of string \n3.Reverse \n4.Compare");
		printf("\n5.Concatenate string \n6.Check palindrome or not \n7.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			c=strlength(str1);
			printf("\nLength of string = %d\n",c);
		break;
		case 2:
			copystr(str2,str1);
			printf("\nCopy of string =");
			puts(str2);
		break;
		case 3:
			printf("\nreverse of string =");
			revstr(str1);
		break;
		case 4:
			c=compare(str1,str2);
			if(c==0)
			printf("\nstrings are equal");
			else
			printf("\nstrings are not equal");
		break;
		case 5:
			concate(str1,str2);
			printf("\nconcatenated string = %s",str1);
		break;
		case 6:
			c=palindrome(str1);
			if(c==1)
			printf("\nstring is not palindrome");
    		else
    		printf("\nstring is palindrome\n");
		break;
		case 7:
		exit(1);
		default:
		printf("\nwrong choice");
		}
	}
	return 0;
}
//function definitions
int strlength(char str1[])
{
	int i,c=0;
	for(i=0; str1[i]!='\0'; i++)
	{
		c++;
	}
	return c;
}
void copystr(char str2[],char str1[])
{
	int i;
	for(i=0; str1[i]!='\0'; i++)
	{
		str2[i]=str1[i];
	}
	str2[i]!='\0';
}
int revstr(char str1[])
{
	int i,c=0;
	for(i=0; str1[i]!='\0'; i++)
		c++;
	for(i=c-1; i>=0; i--)
		printf("%c",str1[i]);	
}
int compare(char str1[],char str2[])
{
	int i,c=0;
	for(i=0; str1[i]!='\0'||str2[i]!='\0'; i++)
	{
		if(str1[i]!=str2[i])
		{
			c=1;
			break;
		}
	}
	return c;
}
void concate(char str1[10],char str2[10])
{
	int i,j,c=0;
	for(i=0; str1[i]!='\0'; i++)
		c++;
	for(i=c,j=0; str2[j]!='\0'; i++,j++)
	{
		str1[i]=str2[j];
	}
}
int palindrome(char str1[])
{
	int len=strlength(str1);
    int i,c=0;
   for(i=0; i<len/2; i++)
   {
    if(str1[i]!=str1[--len])
        c=1;
        break;
   }
   return c;   
}

