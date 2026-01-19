#include<stdio.h>
#include<string.h>
int main(){
	char test[15]="hello world";
	int i=0;
	while(test[i]!='\0'){
		i++;
	}
	printf("the length of string is %d",i);
}
