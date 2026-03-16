//Write a program to input an array of integers and print them using pointers.//
#include<stdio.h>
int main(){
	 int arr[100]; 
    int n, i;
    int *p; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
      printf("Enter %d integers=", n);
    for (i=0;i<n;i++){
    	 scanf("%d", &arr[i]); 
    }
     p=arr;
     printf("The elements of the array are=\n");
    for(i =0;i<n;i++){
    	 printf("%d\n",*p); 
    	 p++;
    }
    return 0;
}
