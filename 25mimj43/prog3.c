/*Create a program to illustrate the use of pointers with character variables. 
Include both reading and printing the character via the pointer. */
#include<stdio.h>
int main(){
	char c=71;
	char *pr=&c;
	printf("%c\n",*pr);
	return 0;
}
