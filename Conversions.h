#include <iostream> 
#include <iomanip>
#include <cctype>
#ifndef CONVERSIONS_H
#define CONVERSIONS_H


using namespace std;


class Conversions {  // defining the main class for conversions methods and data members
	
	public :
	float inputvalue ;	//the variable used for takeing the number entered by the user
	float FA; // The Fahrenheit variable used for calculations.
	float CE; // The Celisius variable used for calculations.
	float Mi	;//TheMile variable used for calculations
	float k_m ; // The kilometer variable used for calculations 
   float C2F(float CE) ;    //functions responbilble for conversions operations, defined outside of the class
	float F2C(float FA) ;
	float M2K(float Mi) ;
	float K2M(float k_M) ;
	Conversions() {   // a constructor for taking value input from the user(called 4 times)
   cin >> inputvalue ; // the input of the user number to be converted.
	
	}
	
};

#endif
