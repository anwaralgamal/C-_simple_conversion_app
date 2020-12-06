#include <iostream> 
#include <iomanip>
#include <cctype>
#include "Conversions.h"



using namespace std;

	char letter ; // The Character letter to be chosen by the user.
    int i = 0 ;   // The variable of the for loop;initialization.

int main()
{
	
	//User interface....
    
cout <<	"Hello,This program  can convert the following units based on your input : "<<endl<<endl ;
cout<<"Fahrenheit to Celsius"<<endl ;
cout<<"Celsius to Fahrenheit"<<endl ;
cout<<"Miles to Kilometers"<<endl ;
cout <<	"Kilometers to Miles."<<endl<<endl ;
cout<<"To start, please enter a letter corresponding to one of the following conversions: " <<endl<<endl;
//Program Menu....
cout <<"A-Celsius to Fahrenheit"<<endl ;
cout <<"B-Fahrenheit to Celsius"<<endl ;
cout <<"C-Miles to Kilometers"<<endl ;
cout <<"D-Kilometers to Miles"<<endl ;

for (i ; i< 100 ; i++ ) { // this loop is made to allow the user making multiple conversions in the same program(multiple inputs)

cin >> letter; // the input of the user letter.

 if (toupper(letter)=='A') // checking which letter the user has entered
 {
 	
 
cout <<"You've entered  letter 'A' (Celsius to Fahrenheit), now enter the Celsius degree to proceed : "<<endl ;
 	Conversions obj1 ;           //initiating the object obj1
 	obj1.C2F(obj1.inputvalue) ; // calling function used for calculation using pass by reference
 }
 else if (toupper(letter)=='B') 
 {
 	 	 cout <<"You've entered letter'B' (Fahrenheit to Celsius ), now enter the Fahrenheit degree to proceed : "<<endl ;

 	Conversions obj2 ;
obj2.F2C(obj2.inputvalue) ; // calling function used for calculation }
  
 }
   else if (toupper(letter)=='C') 
 {
 	 	 cout <<"You've entered letter'C' (Miles to Kilometers), now enter the Miles value to proceed : "<<endl ;

 	Conversions obj3 ;
 obj3.M2K(obj3.inputvalue) ; // calling function used for calculation }

 }
 else if (toupper(letter)=='D') 
 {
 	 	cout <<"You've entered letter'D' (Kilometers to Miles), now enter the Kilometers value to proceed : "<<endl ;

 	Conversions obj4 ;
 obj4.K2M(obj4.inputvalue) ; // calling function used for calculation }

 }
 else if (toupper(letter)=='E') 
 {
 
 cout<<"Program Exit...." ;
     exit (0); // function for exiting the program
}
   
else {
	cout<< "you didnt enter a correct letter, please enter a letter ; A, B, C, or D "<<endl ; // checking if the user has entered a letter from the menu
	cout<<"corresponding to the above conversions operations. "<<endl ;
}
cout<<endl ;
i++ ;
}
   
    return(0);
}


