#include <stdio.h>

// discuss diff. types of loops
// good/bad looping practices
// answering 8.5 Let's Try This! and other activities :P

// while
/*

if(the_sky_is_blue) // runs it once
{	
	print "the sky is blue" // gets printed once
}

while(the_sky_is_blue) // runs it while the statement is true
{
	print "the sky is blue" // gets printed infinitely
}

while(the_condition_here_is_true)
{
	// run whatever is here
}

while loop PROS:
- very versatile
// true or false (1 or 0)
// compare characters
// incremental looping <----

// compare strings

while loop CONS:
- not used very frequently
- does not include intializer and auto-increment
- takes more lines of code sometimes
- its difficult to read sometimes


// do-while
- the only difference between while and do-while is that:
	> in while, you test the condition first (condition -> code)
	> in do-while, you run the code first (code -> condition)

do {
	// run whatever is here
} while(this_condition_is_true);

do-while PROS:
- very useful in some cases

do-while CONS:
- very rare that you ever need to use a do-while

// for loop

parts of a for loop:
initializer 
condition
increment/decrement (update)

int i;

for(initializer; condition; update)
{

}


---- FOR LOOP ---
int i;
for(i = 0; i < 10; i++)
{
	// do smth
}

// create a variable <i>

// start of for loop:
// give <i> the value of 0 (initializer)
// while i < 10, run the code below (condition)
// after running the code below, increment i by 1 (update)


--- WHILE LOOP ---

int i = 0;
while(i < 10)
{
	// do something
	i++;
}

Difference between for-loop and while loop
- for-loop is specialized for incrimental looping
- while loop is versatile and generalist

*/

/*

INPUT:
no. rows and columns

OUTPUT:
multiplication table

rows = 1
columns = 1

OUTPUT: 
1


rows = 4
columns = 4

OUTPUT: 

1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16

rows = 3
columns = 2

1 2 3
2 4 6

notes: 
> use each kind of loop (for, do-while, while)
> modularize

*/

void for_loop_table(int rows, int columns);
void while_table(int rows, int columns);
void do_while_table(int rows, int columns);


int main()
{
	int rows, columns;
	printf("Enter the number of rows and columns for your multiplication table using the following format: <rows> <columns>\n");
	scanf("%d %d", &rows, &columns);
	for_loop_table(rows, columns);
	while_table(rows, columns);
	do_while_table(rows, columns);
	return 0;
}

void for_loop_table(int rows, int columns)
{
	int i, j;
	printf("Printing multiplication table utilizing for-loop: \n\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{	
			printf("%5d ", (j + 1) * (i + 1));
		}
		printf("\n");
	}
	printf("\n");
}

void while_table(int rows, int columns)
{
	printf("Printing multiplication table utilizing while-loop: \n\n");
	int i = 0, j = 0;
	while(i < rows)
	{
		while(j < columns)
		{
			printf("%5d ", (j + 1) * (i + 1));
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
	printf("\n");
}

void do_while_table(int rows, int columns)
{
	printf("Printing multiplication table utilizing do-while loop: \n\n");
	int i = 0, j = 0;
	do {
		do {
			printf("%5d ", (j + 1) * (i + 1));
			j++;
		} while(j < columns);
		j = 0;
		i++;
		printf("\n");
	} while(i < rows);
	printf("\n");
}

