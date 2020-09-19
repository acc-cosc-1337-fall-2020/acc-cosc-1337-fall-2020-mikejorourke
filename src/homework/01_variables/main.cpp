//write include statement
#include <iostream>
#include "variables.h"

//write namespace using statement for cout
 

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
	int main()
{
	double meal_amount; //Part A
  double tip_rate;
  double tip_amount;
  double tax_amount;
 
  
  std::cout<<"Enter meal number"; // Part B
  
  std::cin>>meal_amount;
   
   tax_amount = get_sales_tax_amount(meal_amount); //Part C 

  std::cout<<"Enter tip rate"; //Part D
  
  std::cin>>tip_rate; 
  
  tip_amount = get_tip_amount(meal_amount, tip_rate); //Part E 
  
   double total_amount(meal_amount + tip_amount + tax_amount);
  

  std::cout<< meal_amount << " " << tax_amount << " " << tip_amount << " " << total_amount << "\n"; //Part G



	return 0;
}
