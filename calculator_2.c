#include <stdio.h> 
// meaning of <stdio.h>
// std (lol) = standard
// io = input/output
// h = header
// enables you to input/output stuff

// modularization -> by making functions and shit

// because you don't want to shit where you eat
// you don't want to shit where you eat
// keps things clean and separate

// function -> rooms in a house, where different tasks are performed
// add - 1 - (a + b)
// subtract - 2 (a - b)
// multiply - 3 
// divide - 4

// make a function for each task required
// sometimes, there will a be other formulas (C to F)
// sometimes, there will be two formulas (like in this example)

// function prototypes -> there for the compiler to know that the functions exist
add(float a, float b);
subtract(float a, float b);
multiply(float a, float b);
divide(float a, float b);


int main() 
{
	float a, b;
	printf("Please enter first number (a): ");
	scanf("%f", &a);
	printf("Please enter second number (b): ");
	scanf("%f", &b);
	
	int op;
	printf("Please enter the operation you wish to perform \n");
	printf("1 for addition 2 for subtraction\n3 for multiplication\n4 for division");
	scanf("%d", &op);
	
	float product;
	
	
	if(op == 1){
		product = add(a, b);
		printf("The sum of %.2f and %.2f is %.2f", a, b, product);
		// sum
	} else if(op == 2){
		product = subtract(a, b);
		printf("The difference of %.2f and %.2f is %.2f", a, b, product);
		// difference
	} else if(op == 3){
		product = multiply(a, b);
		printf("The product of %.2f and %.2f is %.2f", a, b, product);
		// product
	} else if(op == 4){
		product = divide(a, b);
		printf("The quotient of %.2f and %.2f is %.2f", a, b, product);
		// quotient
	} else {
		printf("dumbass");
	}
	
	
	
	return 0;
}
int add(int a, int b){
	return a + b;
}






