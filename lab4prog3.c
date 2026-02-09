#include<stdio.h>
#include<string.h>
int main(){
	char s1[10];
	char s2[10];
	printf("enter string1");
	gets(s1);
	printf("enter string2");
	gets(s2);
	strcat(s1,s2);
	printf("concatenated string: \n");
	puts(s1);
	return 0;
}



