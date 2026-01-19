#include<stdio.h>
int main()
{
	char test[20];
	printf("enter the sentence");
	gets(test);
	int b=0;
	int i=0;
	while (test[i]!='\0'){
		if (test[i]==32){
			b++;
	}
	i++;
}
int words;
words=b+1;
printf("the number of words are%d",words);
return 0;
	
	
}
