0x0F-function_pointers

Dealing with function pointers

0-print_name.c ==> function that prints a name, it takes a string as the name and a pointer to a function to format the name.


1-array_iterator.c ==> function that executes a function given as a parameter on each element of an array.


2-int_index.c ==> function that searches for an integer.


3-main.c ==> contains the main function only


3-op_functions.c ==> 
	op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
	op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
	op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
	op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
	op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);


3-get_op_func.c ==> function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.


3-calc.h ==> contain all the function prototypes and data structures used by the program.
