//*******************************************************************************
// Course Number and Section: CSCI 1380-04
// Course Semester: fall 2022
// Your Name: Luis Treviño
// --Only if he helped you with the assignment--
// Teammate Name:
// ---------------------------------------------
// Program Description:
//
// Take the half of the values entered
// make the value entered squared
//
//*******************************************************************************

// library used for inputs and outputs
#include <iostream>
// library use for manipulating outputs
#include <iomanip>

//	DO NOT MODIFY THE LINE BELOW
#include <limits>
using namespace std;

// function prototype for half()
double half(double);
//function prototypt for square
double square(double);

int main() {
	//defining double presition variables numA, numB, NumC
	double numA, numB, numC;
	//defining double presition variables halfValueA, halfValueB, halfValueC 
	double halfValueA, halfValueB, halfValueC;
	//defining double presition variables squaredValueA, squaredValueB, squaredValueC
	double squaredValueA, squaredValueB, squaredValueC;

	//prompt user Please enter three (3) values (Add a space between each):  
	cout << "Please enter three (3) values (Add a space between each): ";
	// store the user inputs on correstponding variables
	cin >> numA >> numB >> numC;
	// make new line
	cout << endl;

	//call returning variable 3 times with the difent input values to be half
	halfValueA = half(numA);
	halfValueB = half(numB);
	halfValueC = half(numC);

	//call returning variable 3 times with the difent input values to be squared
	squaredValueA = square(numA);
	squaredValueB = square(numB);
	squaredValueC = square(numC);

	//make the answer stay as desimals
	cout << fixed;
	//set the presition to be 2 decimal places after the decimal point
	cout << setprecision(2);

	//print [halfValueA], [halfValueB], [halfValueC] is half of [numA], [numB], and [numC]
	cout << halfValueA << ", " << halfValueB << ", " << halfValueC << " is half of " << numA << ", " << numB << ", and " << numC << endl << endl;
	//[squaredValueA], [squaredValueB], [squaredValueC] is squared of [numA], [numB], and [numC]
	cout << squaredValueA << ", " << squaredValueB << ", " << squaredValueC << " is squared of " << numA << ", " << numB << " and " << numC << endl << endl;
	//prompt Press any key to continue...
	cout << endl << "Press any key to continue..." << endl;


	//	DO NOT MODIFY THE LINE BELOW
	cin.get();
	//	DO NOT MODIFY THE LINE BELOW
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	//terminate the program
	return 0;
}

// function definitioon of half()
double half(double x) {
	//make the input value devide by  two
	x = x / 2.0;
	//return the answer
	return x;
}

// function definitioon of squared()
double square(double y) {
	//take the answer passed and  multiply it by itself
	y = y * y;
	// return the asnwer
	return y;
}