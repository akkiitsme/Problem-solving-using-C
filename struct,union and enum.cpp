#include<stdio.h>
struct strstudent{
	char name;
	int sem;
	float marks;
};
union unistudent{
	char name;
	int sem;
	float marks;
};
enum month {jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
//main function
int main()
{
	//structure 
	struct strstudent n1;
	n1.name='A';
	n1.sem=1;
	n1.marks=10.5;
	printf("name=%c,sem=%d,marks=%f",n1.name,n1.sem,n1.marks);	
	printf("\nSize of structure: %d",sizeof(n1));
	//Union
	union unistudent n2;
	n2.name='B';
	n2.sem=2;
	n2.marks=20.5;
	printf("\nname=%c,",n2.name);
	printf("sem=%d,",n2.sem);
	printf("marks=%f",n2.marks);
	printf("\nSize of union: %d",sizeof(n2));
	//Enumeration
	enum month n;
	printf("\n\nEnter value from 0 to 11:");
	scanf("%d",&n);
	switch(n)
	{
		case jan:
			printf("Winter season");
			break;
		case feb:
			printf("Wedding season");
			break;
		case mar:
			printf("Spring season");
			break;
		case apr:
			printf("ohh its april!! Summer season started");
			break;
		case may:
			printf("Summer season");
			break;
		case jun:
			printf("Very hot season");
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
			printf("Heavy Cold season");
			break;
		default:
			printf("Wrong input");											
	}
	printf("\nSize of Enum: %d",sizeof(n));
	return 0;	
}


