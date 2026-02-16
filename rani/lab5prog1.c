/*Write a program to define a structure for a student containing fields for name, 
roll number, and marks. Input and display the details*/
#include<stdio.h>
typedef struct student{
    char name[10];
    int rollno;
    int marks;
}stud;

int main()
{
	stud s={"smita",4,5};
	printf("name-%s\nrollno-%d\nmarks-%d",s.name,s.rollno,s.marks);
	return 0;
}
