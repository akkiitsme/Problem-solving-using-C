#include<stdio.h>
#include<conio.h>
	void is_alpha(char);
	void is_digit(char);
	void is_upper(char);
	void is_lower(char);
	void to_lower(char);
	void to_upper(char);
	
int main () {
	char c;
	int ch;
	printf("Enter any character or digit:");
	scanf("%c",&c);
	printf("\n1.Check alphabet \n2.Check digit \n");
	printf("3.Check uppercase \n4.Check lowercase \n");
	printf("5.Convert lowercase \n6.convert uppercase \n");
	printf("Enter your choice:");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				is_alpha(c);
			break;
			case 2:
				is_digit(c);
			break;
			case 3:
				is_upper(c);
			break;
			case 4:
				is_lower(c);
			break;
			case 5:
				to_lower(c);
			break;
			case 6:
				to_upper(c);
			break;
			default:
			printf("Invalid choice\n");	
		}
	return 0;
}
void is_alpha(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	printf("%c is an alphabet\n",c);
	else
	printf("%c is not an alphabet\n",c);
}

void is_digit(char c)
{
	if(c>='0' && c<='9')
	printf("%c is a digit\n",c);
	else
	printf("%c is not a digit\n",c);
}
void is_upper(char c)
{
	if(c>=65 && c<=90)
	printf("%c is uppercase\n",c);
	else
	printf("%c is not uppercase or character",c);
}
void is_lower(char c)
{
	if(c>=97 && c<=122)
	printf("%c is lowercase\n",c);
	else
	printf("%c is not lowercase or character",c);
}
void to_lower(char c)
{
 	c=c+32;
	printf("to lowercase is %c",c);		
}
void to_upper(char c)
{
	c=c-32;
	printf("to uppercase is %c",c);
}


