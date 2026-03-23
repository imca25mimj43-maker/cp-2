//Implement a function to count the number of vowels in a string using pointers//
#include<stdio.h>
#include<string.h>
int v_count(char*p){
	int i,count=0;
	for(i=0;*(p+i)!=NULL;i++){
		if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
		count++;
	}
	else if(*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='u'){
	
	count++;
	}
	
}return count;
}
int main(){
	char s[10]="abcdefjhf";
	printf("the total number of vowels are %d\n",v_count(&s));
	return 0;
}

