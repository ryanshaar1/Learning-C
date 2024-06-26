#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

	//This is a comment 
	/*
	This is a multiline comment
	*/
int main() {
	/* escape sequence :
	\n = new line
	\t = tab
	\" or \' = literal " or literal '
	\\ = literal \
	and theres more!
	*/
	printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
	//variables:
	int x; 		 //declaration
	x = 123; 	 //initialization
	int y = 321; //declaration and initialziation


	float gpa = 2.05;   		 //floating point number(4 bytes) %f
	double d = 3.14159265;  	 //float with 8 bytes of memory %lf
	char grade = 'c';   		 //single characters %c or %d(if using ascii table and decimal number)
	char name[] = "Ryan";   	 //array of characters %s
	bool boolean = true;    	 //1 byte (1 is true and 0 is false) %d
	short int sh = 32767;    	 //integer with 2 bytes %d
	int age = 17; 				 //integer with 4 bytes (-2,147,483,648 to +2,147,483,647) %d
	unsigned int ui = 4294967295; //integer with 4 bytes but is range is only positive so he can store(0 to +4,294,967,295) %u
	long long int l = 9223372036854775807LL; //8 bytes integer %lld
	unsigned long long int ll = 17223372036854775807ULL; //8 bytes unsigned integer %llu


	printf("Hello %s\n", name);               //this is how to print the content of a variable in a print statement
	printf("You are %d years old\n", age);
	printf("Your averge grade is %c\n", grade);
	printf("Your gpa is %f\n", gpa);
	printf("this is pie: %0.2lf \n", d);//print the 2 digit after the dot
	printf("printing boolean: %d\n", boolean); //print 0 if false and 1 if true
	printf("printing short number: %d\n", sh);
	printf("printing unsigned int: %u\n ", ui);
	printf("printing long long int: %lld\n", l);
	printf("pringing unsigned long long int; %llu\n", ll);

	//format specifiers:

	// %.1 = decimal precision
	// %1 = minimum field width
	// %- =left align

	float item = 100.99;

	printf("Item: $%-8.2f\n", item);

	//constant:
	//constant is a fixed value that cannot be altered by the program during its execution

	const float PI = 3.14159; //now no one can change the value of PI(its a good practice to always make the letters uppercase)
	printf("pie: %f\n", PI);

	//arithmetic operators:
	// + addition
	// - subtraction
	// * multiplication
	// / division
	// % modulus
	// ++ increment
	// -- decrement

	int g = 5;
	int j = 2;

	float z = g / (float)j; //in division with two integers the second integer in to be changed to float

	//user input:
	char fullName[25]; // bytes

	printf("How old are you?\n");
	scanf("%d", &age);

	printf("You are %d years old \n", age);

	printf("What is your name?\n");
	scanf("%s", &name); //scanf only can read until you press the space bar

	printf("Your name is: %s\n", name);

	printf("What is your full name?\n");
	getchar();
	fgets(fullName, 25, stdin); //this line let you get input from the user inculding space bar but it will automatic will get to the next line after display
	fullName[strlen(fullName)-1] = '\0'; //this line let you remove the option to go right away to the next line after the message was printed

	printf("Your full name is: %s\n", fullName);

	return 0;
}

