// Write a program to calculate the length of a string using pointers. //
#include<stdio.h>
int main(){
	char c[30];
	char *p;
	int count=0;
	int i;
	printf("enter the string");
	scanf("%s",c);
	p=c;
	while(*(p+i)!=NULL) {
		count++;
		i++;
	}
	printf("the lenghth of string is =%d",count);
	return 0;
	}	


