// Develop a program to count occurrences of a specific character in a string//
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char ch;
	int i,count=0;
	printf("enter the string");
	gets(str);
	printf("enter the character you want to count");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++){
	if(str[i]==ch){
	count++;
}
}
printf("the no.of character are %d",count);
return 0;
}
