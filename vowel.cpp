#include<stdio.h>
int main() {
	char c;
	int v;
	printf("enter any alphabet:");
	scanf("%c", &c);
	v = (c =='a'|| c =='e'|| c =='i'|| c =='o'|| c =='u');
	if(v)
	printf("%c is a vowel",c);
	else
	printf("%c is not vowel",c);
	return 0;
}
