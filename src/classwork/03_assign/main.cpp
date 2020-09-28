//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
//Write namespace using statements for cout and cin
using std::cout; using std::cin;

int main() 
{
   int user_grade;
   
    cout<<"Enter Your Test Score: ";
    cin>>user_grade; 

    if(user_grade >= 0 && user_grade <= 100)
    {
        cout<< "Your letter grade is:" <<get_letter_grade_using_if(user_grade) << " " << get_letter_grade_using_switch(user_grade);
    }
    else
    {
        cout<<"Invalid grade";
    }
    

    return 0;
  
 

}
