//How can you implement a program to count the number of vowels in a string?//
#include<stdio.h>
#include<string.h>
int main(){
	char a[40];
	int i,d=0;
	printf("enter the string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		d++;
	}
{
	printf("total vowels are:%d",d);
	
}
return 0;	
}

