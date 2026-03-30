// Write a program to create a structure named Complex and define a function incrComplex() 
//to increment the value of both real and imaginary members by 1. //
#include<stdio.h>
struct complex{
	float real;
	float imag;
};
void incrcomp(struct complex*c){

    c->real+= 1.0;
    c->imag+= 1.0;
}
int main(){
	struct complex num={5.5,3.8};
	printf("before increment=%.1f+%.1fi\n",num.real,num.imag);
	incrcomp(&num);
	 printf("After increment= %.1f+%.1fi\n",num.real,num.imag);
	 
	 return 0;
}
