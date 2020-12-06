 #include <iostream> 
#include <iomanip>
#include <cctype>
#include "Conversions.h"



using namespace std;
 
 
 float Conversions::C2F (float CE) // Function to convert from Celsius To Fahrenheit.
{
	
 	FA=(CE*9/5)+32  ; // Celsius To Fahrenheit Conversion Equation.
 	cout <<"The degree in Fahrenheit is : "<<FA<<" F "<<endl ;
 		cout<<"Conversion complete " << endl<<endl ;
cout<<"To do another conversion , enter a letter or enter 'E' to exit the program : "<<endl ;
}
    float Conversions::F2C (float FA)  //Function to convert from Fahrenheit to Celsius.
{
	
 	CE = (FA-32)*5/9 ; // Fahrenheit to Celsius Conversion Equation.
  cout <<"The degree in Celsuis is : "<<CE<<" C "<<endl ;
 	cout<<"Conversion complete " << endl<<endl ;
cout<<"To do another conversion, enter a letter or enter 'E' to exit the program : "<<endl ;
}
    float Conversions::M2K (float Mi)   //Function to convert from Miles to Kilometers.
{
	
 	k_m=Mi*1.60934 ;  //Miles to Kilometers Conversion Equation.
  cout <<"The Value in Kilometers is : "<<k_m<<" Kilometer"<<endl ;
 	cout<<"Conversion complete " << endl<<endl ;
cout<<"To do another conversion, enter a letter or enter 'E' to exit the program : "<<endl ;
}
    float Conversions::K2M (float k_m)  //Function to convert from Kilometres to Miles.
{
	
 	Mi=k_m/1.60934 ; // Kilometers to Miles Conversion Equation.
  cout <<"The Value in Miles is : "<<Mi<<" Miles "<<endl ;
 	cout<<"Conversion complete " << endl<<endl ;
cout<<"To do another conversion, enter a letter or enter 'E' to exit the program : "<<endl ;
}

