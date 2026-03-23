//Write a program to copy one string to another using pointer.//
#include<stdio.h>
int main(){
	char a[4]="abc"; int i;
	char b[4];
	char *p=a;
	strcpy(b,p);
	
	for(i=0;b[i]!=NULL;i++){
		printf("%c\n",b[i]);
	}
	return 0;
	
}
