#include<stdio.h>
#include<string.h>
int main()
{
	int n1,n2;
	char name[20],space[20];
	char str1[20],str2[20];
	printf("ENTER ANY NUMBER:");
	scanf("%d",&n1);
	//conversions
	printf("Decimal to Octal value is: %o",n1);
	printf("\nDecimal to Hexadecimal value is: %x",n1);
	printf("\nEnter any octal number:");
	scanf("%o",&n2);
	printf("Octal to Decimal value is: %d",n2);
	printf("\nOctal to Hexadecimal value is: %x",n2);
	//string input and output
	printf("\nEnter your name:");
	fflush(stdin);
	gets(name);
	puts(name);
	scanf("%[^\n]",&space);
	printf("Name with space: %s",space);
	//String functions
	printf("\nEnter any string:");
	scanf("%s",&str1);
	printf("Length of string: %d",strlen(str1));
	printf("\nEnter second string:");
	scanf("%s",&str2);
	strcat(str1,str2);
	printf("\nconcatenate string:%s",str1);
	printf("\nUpper string:%s",strupr(str1));
	printf("\nLower string:%s",strlwr(str1));
	strcpy(str2,str1);
	printf("\n\nValue of string 1 %s to string 2 is:%s",str1,str2);
	printf("\nReverse string:%s",strrev(str1));
	return 0;
}
	
	

