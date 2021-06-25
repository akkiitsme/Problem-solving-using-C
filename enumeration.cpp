#include<stdio.h>
enum month {
	jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
int main()
{
	int i,n;
	printf("Enter value from 0 to 11:");
	scanf("%d",&n);
	switch(n)
	{
		case jan:
			printf("winter season");
			break;
		case feb:
			printf("wedding season");
			break;
		case mar:
			printf("Spring season");
			break;
		case apr:
			printf("Summer season started");
			break;
		case may:
			printf("Summer season");
			break;
		case jun:
			printf("Summer season");
			break;
		case jul:
			printf("Rainy season started");
			break;
		case aug:
			printf("Rainy season");
			break;
		case sep:
			printf("Rainy season");
			break;
		case oct:
			printf("Festive season");
			break;
		case nov:
			printf("winter season started");
			break;
		case dec:
			printf("Heavy winter season");
			break;
		default:
			printf("Wrong input");											
	}
	return 0;
}
