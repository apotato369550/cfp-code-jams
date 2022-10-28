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
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);


int main() // where the main code is executed
{
	// ask for two numbers to perform the operation on [x]
	float a, b;
	printf("Please enter first number (a): ");
	scanf("%f", &a);
	printf("Please enter second number (b): ");
	scanf("%f", &b);
	
	// user inputs a number (1-4)
	// the input is fixed (no decimals) which is why we are using int
	int op;
	printf("Please enter the operation you wish to perform \n");
	// special keywords for making text look lice
	// \n - new line
	/*
	
	Hi! Hello! How are you?
	> Hi! Hello! How are you?
	
	Hi! \nHello! \nHow are you?
	> Hi! 
	> Hello! 
	> How are you?
	
	*/
	printf("1 for addition 2 for subtraction\n3 for multiplication\n4 for division");
	scanf("%d", &op);
	
	// each number corresponds to an operation (add, subtract, divide, multiply)
	// add - 1 (op == 1)
	// subtract - 2 (op == 2) etc.
	// multiply - 3
	// divide - 4
	// perform the operation
	// if the user is a dumbass virgin and enters a number that's not 1-4
	// we tell him he/she/they is/are a big poopoo brain k? (sucks to be them)
	
	float product;
	
	// diplaying floats
	// %f - displays 6 decimal points (1.000000)
	// %.2f - displays 2 decimal points(1.00)
	// %.1f - displays 1 decimal point(1.0)
	
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
	
	// display it
	
	
	return 0;
}

// float - accepts a number (with possibly a decimal)
// float - store numbers w/ or w/o decimal (chad float)
// int - store whole numbers :(( (virgin int)

float add(float a, float b) // room/function for the addition task
{
	return a + b; //wttf is this??
}

float subtract(float a, float b) // function for subtract 'task;
{
	return a - b;
}

float multiply(float a, float b) // multiply 'task'
{
	return a * b;
}

float divide(float a, float b) // divide 'task'
{
	return a / b;
}

// sometimes, miss will ask for integer
// if asked for int, store as int
// if asked for number, store as float 
// if not explicit, when in doubt, float it lmao (kek)

// functions

// functions in math (virgin)
// x = 2
// f(x) = 4
// f = 2x
// f(2) = 2(2)
// f(2) = 4

// f(x) = 4 <- value
// ^ ^parameter
// ^ function

// function in programming

// a = 2 and b = 2
// add(a, b) = 4
// add(a, b) returns a + b;
// add(2, 2) returns 2 + 2;
// add(2, 2) = 4

// float add(float a, float b) = 4 <- (return) value
// ^      ^    ^ parameters ^ 
// ^      ^ function name
// ^ type declaration





