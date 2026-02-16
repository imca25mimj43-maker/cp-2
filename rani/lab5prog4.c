/*Create a nested structure to store a student’s details (name, roll number, and 
address where address is another structure)*/
#include<stdio.h>
typedef struct student{
	char name[30];
	int rollno;
	struct address{
		char city[30];
		char district[30];
		char state[30];
		int pin;
	} add;
	
}std;
int main()
{
	std s1={"stuti",46,"bhubaneshwar","khorda","odisha",75101};
	printf("name-%s\nrollno-%d\n",s1.name,s1.rollno);
	printf("city-%s\ndistrict-%s\nstate-%s\npin-%d\n",s1.add.city,s1.add.district,s1.add.state,s1.add.pin);
	return 0;
}
	


