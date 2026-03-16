//Implement a function to find the largest element in an array using pointers.//
#include<stdio.h>
int main(){
	int arr[5]={20,5,8,14,9};
	int *p;
	int i ,max;
	p=arr;
	max=*p;
	for(i=0;i<5;i++){
	if(*(p+i)>max)
		max=*(p+i);
}
printf("largest element is %d",max);
return 0;
}

