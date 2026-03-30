//Write a program to swap two numbers using call by reference//
#include<stdio.h>
swap(int*,int*);
int main()
{
	int a,b;
	printf("enter the value of a and value of b");
	scanf("%d %d",&a,&b);
	printf("before swapping:");
	printf("a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("after swapping:");
	printf("a = %d\n b = %d", a, b);
	return 0;
}
swap(int*x,int*y)
{
	int temp;
	temp=*x;
    *x=*y;
    *y=temp;
}

