#include <stdio.h> // frying pan <stdio.h>
#include <math.h> // spatula <math.h>

// use of libraries
// > advanced operators

// without math.h
// + - / * %

// with math.h
// sqrt() - get square root of a number
// abs() - get absolute value of a number
// pow() - raise a number to an exponent
// ...so much more

// MAD
// ((di1 - dave1) + (di2 - dave2) + (din - daven)/n

// computes dee(z) average - no shit
// compute the average (of 5 numbers)
// (n1 + n2 + n3 + n4 + n5) / 5
float compute_average(float n1, float n2, float n3, float n4, float n5);

// computes mad - mean absolute deviation
// ((di1 - dave1) + (di2 - dave2) + (din - daven)/n
// ((di1 - dave1) + (di2 - dave2) + (di3 - daven3) + (di4 - dave4) + (di5 - daven5)) / 5
float compute_mad(float average, float n1, float n2, float n3, float n4, float n5);

int main()
{
	float n1, n2, n3, n4, n5;
	printf("This program computes the average and the mean absolute deviation (MAD) for a given set of 5 floats\n");
	
	printf("Enter your first number: ");
	scanf("%f", &n1);
	
	printf("Enter your second number: ");
	scanf("%f", &n2);
	
	printf("Enter your third number: ");
	scanf("%f", &n3);
	
	printf("Enter your fourth number: ");
	scanf("%f", &n4);
	
	printf("Enter your fifth number: ");
	scanf("%f", &n5);
	
	float average = compute_average(n1, n2, n3, n4, n5);
	float mad = compute_mad(average, n1, n2, n3, n4, n5);
	
	printf("Your average is: %.2f\n", average);
	printf("Your mean absolute deviation is: %.2f\n", mad);
	printf("%.2f +- %.2f", average, mad);
	
}

float compute_average(float n1, float n2, float n3, float n4, float n5)
{
	
	float sum = n1 + n2 + n3 + n4 + n5;
	float average = sum / 5.0;
	
	return average;
}

float compute_mad(float average, float n1, float n2, float n3, float n4, float n5)
{
	float mad, sum, d1, d2, d3, d4, d5;
	
	d1 = abs(n1 - average);
	d2 = abs(n2 - average);
	d3 = abs(n3 - average);
	d4 = abs(n4 - average);
	d5 = abs(n5 - average);
	
	/*
	9
	10
	10
	9
	10
	9
	average = 9.5
	
	d1 = abs(n1 - average);
	d2 = abs(n2 - average);
	d3 = abs(n3 - average);
	d4 = abs(n4 - average);
	d5 = abs(n5 - average);
	
	d1 = |9 - 9.5| = 0.5
	d2 = |10 - 9.5| = 0.5
	d3 = |10 - 9.5| = 0.5
	d4 = |9 - 9.5| = 0.5
	d5 = |10 - 9.5| = 0.5
	d6 = |9 - 9.5| = 0.5
	
	sum = 0.30
	mad = 0.30 / 6 = 0.5
	*/
	
	
	sum = d1 + d2 + d3 + d4 + d5;
	mad = sum / 5.0;
	
	return mad;
}

// valid sample cases

// case 1: 10, 11, 8, 9.5, 9.80
// case 2: 4.75, 4.75, 4, 4.95, 4.25
// case 3: 26.6, 27.2, 28, 25, 27.5

// mindset on how to tackle coding problem shitfoo
// no. 1 - Calm down (because you're always smarter than you think)
// no. 2 - find the formulas/conditions: a + b, a2 + b2 = c2, 
// if grade is above 60%, if age is at or above 18, etc.
// no. 3 - build/create the outline of the program
		// > delegate the tasks (formulas/conditiosn) to other functions
		// > don't forget to declare function prototypes at the start of the file
// no. 4 - color it in (start doing the actual code/implementatiosn
		// in the main() function - accept input from user & display results
		// in other functions - accept parameters, return values from parameters
// no. 5 - profit

