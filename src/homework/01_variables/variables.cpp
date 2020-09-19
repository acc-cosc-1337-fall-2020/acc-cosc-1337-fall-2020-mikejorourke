#include "variables.h"

//example
const double tax_rate = .0675;

double get_sales_tax_amount(double meal_amount)
{
  double num= tax_rate * meal_amount;
  
  return num;

}

double get_tip_amount(double meal_amount, double tip_rate)
{
 double num = meal_amount * tip_rate;

return num; 
}




//write code for multiply_numbers function here
//function returns product of num1 and num2




