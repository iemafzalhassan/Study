#include<stdio.h>
int main() {

	// This is a single line comment in C
	//you must use comments to explain your code
	// it will help to you back and the other people to understand your code.
	// and we can also understand our code later


	/*





						This is a multi-line comment in C 
			
			Here we are declaring some variables
			int age = 47; // This is an integer
			float pi = 3.14; // This is a float
			char hastag = '#'; // This is a character
			type of variables age and pi are int and float respectively
			in the variable hastag we are storing a character
			so basically we stored 47 in as an integer in age
			we stored 3.14 as a float in pi
			and we stored '#' as a character in hastag
			we can also store a string in a variable
			we will learn about strings later
			see the program below.






	 */


// ** idk if you understand the concept of variables or not but i'll explain it to you
// ** variables are like containers in which we store data
// ** we can store any type of data in a variable

	int age = 47;
	float pi = 3.14;
	char hastag = '#';
	printf("Age: %d\n", age);
	printf("Pi: %f\n", pi);
	printf("Hastag: %c\n", hastag);



// -------------------------------------------------------------------------------------------------------------------//





	// printf() is a function which is used to display a message on the screen 
	// Antyhing inside the double quotes along with paranthesis will be displayed the message on the screen



//-------------------------------------------------------------------------------------------------------------------//


//    										\n is used to print a new line


//-------------------------------------------------------------------------------------------------------------------//

printf("Welcome in the Sourge Developers Community\niemafzalhassan is the founder of this community\n");


printf("age = 29\n");

printf("My age is %d\n", age);
// %d means double value which is used to print or display interger on the screen.

printf("The value for pie is %f\n", pi);

// %f is used to display real numbers (float like eg:---> 1.22662, 1672617.272).

printf("Hashtag %c\n", hastag);

// %c is used to display character's like eg:---> *, # 

// _ underscore is a special character which you can use in the middle of the variable
/*
			To display a unique or human redable variable eg:---> your_name = "SDM Member"
*/

// Value stored in the variable can be replaced after the time.
// Eg:--->   pi = 1.2 ---> printf("The value of pi is now change while recalling the value stored in pie variable.%f\n", pi);

pi = 1.2;
printf("the value of pie is now changed %f\n", pi);

// Actuall meaning of variable is related to change. :-)


//  			Datatypes: some fo then in c are below with the memory storing capacity value.

/*
		Char or signed char 				------>     1 bytes.
		Unsigned char       				------>     1 bytes.
		int or signed int				 	------>     2 bytes.
		Unsigned int 						------>     2 bytes.
		Short int or unsigned Short int     ------>     2 bytes.
		signed short int 					------>     2 bytes.
		Long int or signed long int			------>     4 bytes.
		Unsigned Long int 					------>     4 Bytes.
		float 								------>     4 Bytes.
		Double 								------> 	8 Bytes.
		Long Double 						------>		10 Bytes.


					Many of these we'll not use in daily basis but while practising on this program.c sheet we'll learn what you need for
					your dailt basis.

*/

// Basically Datatypes means what we are storing in te variable thats type.
// like Eq:--->   we stored age 29 that is an integer for pi that is float (value which is real or in point/dot) char for character like #.


// In C we do not have str or string, boolean datatype cause this language was build in 1970s.
// After this language C++ came, ----->		Java, ----->   JavaScript.

/* We'll here many learn three type of datatypes.
	int ----> It store the value which is whole integer value it can be +ve and -ve.

*/

int Indian_team_football_Score = 270;
printf("Score %d\n", Indian_team_football_Score);

float Crime_rate_in_saharsa = 76.23;
printf("Crime rate in Saharsa distric is %f% \n", Crime_rate_in_saharsa);
// To store some value in character variable we need to use single quotes.

char Star = '*';
printf("This is a Character star.%c\n", Star);

//  Constant ---> which value will not be chnaged is knowns a constant.

// In C there a 3 constatnts.

//		----> Types:----> 	1) Integer Constant 		---->	Eg:- 1, 2, 3, 0, -1, -2 etc.	---> value of 1 will always be 1 only.
/*							2) Real Cnnstants.			---->	Eg:- 1.0, 2.0, 2.14, 1.54, -2.4, -24.32 etc.	----> value of -2.4 will be -2.4 only it'll not change.
							3) Character Constants.		---->   Eg:- 'a', 'A', 'B', 'b', '*', '#', '@' etc.		----> here also a means a and A means A both are different both stands for themselves only.

*/


// 					Keywords 

// There is 32 keywords in c programming language which means c knows the meaning of that words
// we'll have to use as it is.
// we cannot use this words as variable
// this words has a special meaning for c compiler.


/*
							Keywords are :
				auto		double		int			struct
				break		else		long		switch
				case		enum		register	typedef
				char		extern		return		union	
				continue	for			signed		void
				do			if			static		while
				default		goto		sizeof		volatile
				const		float		short		usigned

*/

// Don't worry we'll explore these keyword in this program futher you do not need to remember it.

// %d, %f, %c ---> these are format specifier in C.

char star = '*';
printf("Star %c\n", star);


// Input ---> we can scanf to take input from user in c.
// scanf is a function in c which helps the developer to take input from the service user of the developer.
// scanf("%d", &age);
// here i have add %d it means i'll take integer as a input from user.
// after that we'll add & and (ampercent) 


int a, b;
printf("Enter your value for a: ");
scanf("%d", &a);
printf("Enter value for b: ");
scanf("%d", &b);
int sum = a + b;
printf("Sum is : %d\n", sum);


// here we have taken input from user and stored in variable a and b.
// and made a variable with sum name and putted the value of sum for a and b.
// and then printed it out.

// here we do not need to store value if we do not want to use it in the program
// same program for addition can be also performed as---->
int value_one, value_two;
printf("Enter your first value: ");
scanf("%d\n", &value_one);
printf("Enter your second value: ");
scanf("%d\n", &value_two);
printf("Sum is : %d\n", value_one+value_two);

// Compilation :----> the code above you have written and the ouput what is display is done by compilation.
// Compilor is the translator which converts our program into binary to make understood to our Pcs/Machines.

// ------------------------------------------------------------------------------------------------------------------------ //
// Q1. Write a program to calculate are of square?
// Sol.
// As we know side * side is used to know area.
int side;
printf("Enter value for side :");
scanf("%d\n", side);
printf("Area is : %d\n", side*side);

































	return 0;
}


// this code is contributed by iemafzalhassan 
// now below we'll study data type work flow in c.

