#include<stdio.h>
#include<string.h>
struct Student {
  char name[20];
  int age;
  int sem;
  int marks;
};
void displayStruct(struct Student S[10]){
  	int i,maximum=0;
  	int sum=0;
  	char max_name[20];
  	struct Student *ptr =NULL;
  	ptr=S;
  	for(i=0;i<3;i++){
    printf("\n\nStudent %d",i+1);
    printf("\nName: %s",ptr->name);
    printf("\nAge: %d",ptr->age);
    printf("\nSemester: %d",ptr->sem);
    printf("\nMarks: %d",ptr->marks);
    sum=sum+ptr->marks;
    if(maximum<ptr->marks){
      maximum=ptr->marks;
      strcpy(max_name,ptr->name);
    }
    ptr++;
  }
  printf("\nName Of Student With Maximum Marks: %s with %d",max_name,maximum);
  printf("\nTotal marks of all student: %d",sum);
}
//main function
int main()
{
  	struct Student S[10],*ptr;
  	ptr=S;
  	int i;
  	for(i=0;i<3;i++){
    printf("\nStudent %d",i+1);
    printf("\nEnter Name:");
    fflush(stdin);
    gets(ptr->name);
    printf("Enter Age: ");
    scanf("%d",&ptr->age);
    printf("Enter Semester: ");
    scanf("%d",&ptr->sem);
    printf("Enter Marks: ");
    scanf("%d",&ptr->marks);
    ptr++;
  	}
	displayStruct(S);
	return 0;
}


