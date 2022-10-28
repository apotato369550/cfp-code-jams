#include <stdio.h>

int get_sum(int a, int b);
int should_i_sleep_in(int is_weekday, int is_holiday);

int main()
{
	int a, b;
	printf("Enter integer 1: ");
	scanf("%d", &a);
	
	printf("Enter integer 2: ");
	scanf("%d", &b);
	
	printf("The sum of these two integers is = %d\n", get_sum(a, b));
	
	// the purpose: is to decide whether or not to sleep in
	// when can you sleep in? - when it's either the weekend or a holiday
	
	// the user inputs the answer to the following questions:
	// is it a weekday?
	// is it the weekend?
	// is it a holiday?
	
	// this partVVV should not be bulky
	// your job is to determine if that person can/should sleep in
	// if it's a weekend or a holiday, they sleep in
	// otherwise, if it's a weekday, they don't sleep in
	
	// utilize modularization
	// as few lines as possible - lenient
	
	int is_weekday, is_holiday;
	printf("Is it a weekday? (1 for yes, 0 for no). Is it a holiday? (1 for yes, 0 for no) \n");
	scanf("%d %d", &is_weekday, &is_holiday);
	should_i_sleep_in(is_weekday, is_holiday) ? printf("Sleep in.\n") : printf("wakey wakey\n");
	
	// two main types of loops: 
	// for-loops
	// while loops
	
	
	// while loops
	// > execute code while the condition in the paranthesis is true
	// > handle with care - don't crash ur comp pls ong
	
	// goal: determine if we're full
	
	// you are at an unli wings restaurant
	// you are hungry af and have eaten 0 effing wings
	
	int wings = 0;
	
	// you pay the cashier, and they start bringing wings out
	// you can only eat so much wings
	// you say to yourself, "i'll eat 20, then i'll stop."
	
	while(wings < 20){
		printf("nom\n");
		wings++;
	}
	
	// ways to utilize while loops:
	// > you can repeatedly ask a user for input until they enter a correct input
	
	// let's ask the user to enter a number
	
	printf("Enter a number: ");
	
	// we need to take into account if the user is dumb. and stupid. and decides to not enter a number
	// problem: when the user doesn't enter a number, the program == deadXP
	// to fix: we ask the user repeatedly until they enter a valid number
	
	while(){
		
	}
	
	
	// for loops
	
	int i;
	
	for(i; i < 10; i++){
		
	}
	
	
	
	
	return 0;
}

int get_sum(int a, int b)
{
	return a + b;
}

int should_i_sleep_in(int is_weekday, int is_holiday) { return is_holiday || !is_weekday ? 1 : 0; }

