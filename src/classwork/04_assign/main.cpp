//write includes statements
#include "loops.h"
#include <iostream>

//write using statements for cin and cout
using std::cin; using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
 int user_num;
 
 do 
 {
   cout<<"Enter a Number Between 1 and 20: ";
   
   cin>>user_num;

 cout<<"Factorial of given number is: "<< factorial(user_num) << "\n"; 

 }
 while (user_num >= 1 && user_num <= 20);

	return 0;
}