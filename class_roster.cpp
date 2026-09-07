/*
#include "iostream"
using namespace std;
*/

#include "std_lib_facilities.h"

int main()
{
	int class_size;
	// at this point class_size variable is accessible for program to use. but is it clear what value it will be?
	// a good practice expects all variables to be immediately initiated	
	class_size = 25;

	// a typical "three in one": variable is declared, defined and initiated. doesn't leave place for uninitiated variable. 
	double average_age = 23.3;

	cout << "Please enter student data\n";

	string first_name;	
	cout << "Please enter first name:\n";

	// notice syntax of collecting user input, compare to supplying user output
	cin >> first_name;


	cout << "Please enter last name:\n";

	// please collect new student's last name is variable last_name
	
	string last_name;

	cin >> last_name;


	cout << "Please enter age:\n";	
	// please collect new student's age in variable age
	
	int age;

	cin >> age;

	// notice cin >> is equally succesfull collecting integer or string. such behavior is called polymorphysm.	int age;	

	// increment class_size by one to factor new addition. 
	// consider using unary operator ++

	class_size++;

	// giving end user interactive, detailed informaiton is at heart of good UA/UX
	cout << "\nStudent data collected.\n";

	// notice how we can use + op between strings in a sense of string concatenation. 
	// however ahen it comes to age, we have to revert to << redirection operation.
	// what would have happened if instead we put 
	// cout << first_name +  " " + last_name + " of age: " + age + "\n";
	// you can give above line a try. commenting/uncommenting, testing code alterations in the usual passtime of any coder. 
	cout << first_name +  " " + last_name + " of age: " << age << "\n";
	cout << "New class size is " << class_size << "\n";

	// mixing new age with existing class average.
	// notice int age seemlessly entering calculation which otherwise is double.
	// this is example of implicit cast. 
	// this is widening, safe conversion, since int has clear interpretation as float and no byte clipping required either.

	// also notice how average_age participates on both sides of this statement. this is were coding language diverges with math language
	// in coding (specifically in C++) such situation means that on left class_age enters with prior value and result of calculation
	// on left is assigned to class_age on the right, so that going forwar this variable will resolve to a new value. 
	average_age = (class_size-1)*average_age / class_size + age / class_size;
	cout << "New class average age is " << average_age << "\n";

	return 0;
}