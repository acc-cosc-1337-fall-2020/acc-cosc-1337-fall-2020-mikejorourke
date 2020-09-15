//Write the include statement for types.h here
#include "types.h"
#include <iostream>
//Write include for capturing input from keyboard and displaying output to screen



int main() 
{
  int num1,num2 = 4;
  std::cout<< "Enter number here";
  std::cin>> num1;
  
  std::cout<< mutiply_numbers(num1);
	return 0;
}

