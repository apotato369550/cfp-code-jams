#include <stdio.h>

int dad(int x, int y); // dad (exists)
void print_greeting();

int main()
{
	// conditional operators and stuff
	// if & if else
	
	// if whatever is in the parenthesis is true,
	if(1){
		// do something
		
		// nested ifs
		// if this is true,
		if(1){
			// do this, otherwise
		} else {
			// do this
			
			// do things if the condition above isn't met
		}
	} else if(1){
		
	} else if(){
		
	} else if(){
		
	}
	
	
	// if-else
	if(1){
		// evaluates this,
		// if it's true, 
		// run whatever's here
		// if it's false,
	} else if(1){ // evaluate what's here
		// if it's true,
		// run whatever's here
		// otherwise
	}
	// then move on
	
	// vs 2 ifs
	
	// check if the conditions true
	if(1){
		// if it's true, run here
	}
	// move on
	// redundantVV
	if(1){
		
	}
	
	// tldr; if-else is better than 2 ifs 
	// because 2 ifs is redundant
	
	// switch case
	
	// similar to if-else with its pros and cons
	// pros: faster
	// cons: less versatile
	
	int x = 0;
	
	// goal: to check if x is greater than 5
	
	// switch statement
	
	switch(x){
		case 0:
			printf("Less than 5");
			break;
		case 1:
			printf("Less than 5");
			break;
		case 2:
			printf("Less than 5");
			break;
		case 3:
			printf("Less than 5");
			break;
		case 4:
			printf("Less than 5");
			break;
		case 5:
			printf("Less than 5");
			break;
		default
			printf("Greater than 5");
			break;
	}
	
	// if-else 
	
	if(x > 5){
		printf("Greater than 5");
	} else {
	}
	
	// determine the strand
	
	// case-switch
	
	char strand = 'T';
	
	// an arrow that goes down
	// only stops when it hits a break statement
	switch(strand){
		case 'S':
			printf("sdsd");
			break;
		case 'T':
			printf("ttatat");
			break;
		case 'E':
			printf("Engignien+");
			break;
		case 'M':
			printf("math");
			break;
		default:
			printf("No strand");
			break;
	}
	
	// if else
	// staircase
	if(strand == 'S'){
		printf("sdsd");
	} else if(strand == 'T'){
		printf("t");
	} else if(strand == 'E'){
		printf("e");
	} else if(strand == 'M'){
		printf("m");
	} else {
		printf("poopoo");
	}
	
	
	// if else statements allow the use of:
	// &&, ||, and !
	// >, <, >=, <=, ==, !=
	
	// while switch-case does not
	
	
	// ternary operator
	
	// single line if else
	
	// 1 = true
	// 0 = false
	int hungry = 1;
	
	// if - 5 lines
	if(hungry){
		printf("Eat. bogo");
	} else {
		printf("starve");
	}
	
	// case switch - 8 lines
	switch(hungry){
		case 1:
			printf("Eat. bogo");
			break;
		case 0:
			printf("starve");
			break;
	}
	
	// ternary - 1
	// <condition> ? <run_me_if_condition_is_true> : <run_me_when_false>
	// ? = evaluate the <condition>
	// : = otherwise,
	printf(hungry ? "Eat. bogo" : "starve");
	
	// everything you can do w/ ternarys, you can do with if else
	// but not everything you can do w/ if else can be translated
	// into ternary
	
	// &&, ||, and ! = AND, OR, NOT
	// >, <, >=, <=, ==, !=
	
	// operators used in conditional statements
	// the purpose of these shits: &&, ||, and !
	// is to evaluate multiple ocnditions at the same
	
	// virgin single-conditional, if statement
	// if 1 == 1 (duh)
	if(1 == 1){
		// run run run
	}
	
	
	int is_the_sky_blue = 1;
	int is_grass_green = 1;
	// if you want to evaluate more than 1 condition,
	// use either && or ||
	// bars
	
	// && = if all the conditions are true
	// if everything here is true
	if(1 == 1 && is_the_sky_blue && 2 == 4 && 3 == 3 && is_grass_green){
		// what if:
		// you want to run this code
		// if 1 == 1
		// AND if the sky is blue
		
		// will the coe here run??
		// ding ding
		// correct
		
		// run the code
		// run it
		
		
		/// unli sampgyup
	}
	
	// || - OR
	// one of them has to evaluate to true
	// protip: do not mix || && in the same line
	// what's below is a nonoVVV
	// do not replicate
	if(1 == 0 || is_the_sky_blue && 1 == 1 || 2 == 3){
		// in order fordis to run
	}
	
	// we want to test:
	// 1 == 1 and the sky is blue
	// or
	// 1 == 2 and if grass is green
	
	// 1 + 1(2 + 3)
	// PEMDAS
	// parentshhfs, exposentns, multi, divi, add, subtract
	
	// (1 == 1 && is_the_sky_blue) || (1 == 2 && is_grass_green)
	// (1 == 1 && is_the_sky_blue) - 1 == 1 and the sky is blue
	// || - or
	// (1 == 2 && is_grass_green) - 1 == 2 and if grass is green
	
	// (1 == 1 && is_the_sky_blue) - 1
	// || - or
	// (1 == 2 && is_grass_green) - 0
	
	// 1 || 0 - 1
	
	// winner winner chicken dinner 
	
	if((1 == 1 && is_the_sky_blue) || (1 == 2 && is_grass_green)){
		// will this run?
	}
	
	// modularization
	
	// what modularization - breaking into parts
	
	// perfect analogy: living in a house
	// kitchen, garage, living room, cr, altar, basement, dining room
	
	// virgin without modularization - eats and shits in the same room (ew)
	// chad modularization - shits in the cr (floor) and eats in the dining room (floor)
	
	// houses - rooms
	// rooms -> modules of a house
	// modules -> functions
	// roooms -> modules -> functions
	
	// three steps to making/using a function
	// prototype declaration -> telling the compiler that the function exists
	// compiler - is the thing that translates to binary and runs the program
	// (actually) making it
	// calling it in main();
	
	
	printf("Hello World! ");
	
	return 0;
}

// function
// data types:

// use these ones belowVV if you plan on returning a value
// int
// char
// float
// double

// void

int dad(int x, int y){
	return x + y;
}

void print_greeting(){
	printf("Welcome!");
}



// wtf is 'return'

// functions
// in math, they look like this 

// virgin "f"
// f(x) = 0 < return value
// ^ function

// in programming, they look like this

// chad customizability
// int dad() = 0 < return value
// ^    ^ function
// data type
// int
// char
// float
// double

// function that does not return an integer
// int dad()


