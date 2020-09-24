#include "decision.h"
#include <iostream>

using std::cout; using std::cin;

std::string get_letter_grade_using_if(int grade)
{
    std::string  if_grade;

    if(grade > 90 && grade < 100)
    {
        if_grade = "A";
    }
    else if(grade > 80 && grade < 89)
    {
        if_grade = "B";
    }
    else if(grade > 70 && grade < 79)
    {
        if_grade = "C";
    }
    else if(grade > 60 && grade < 69)
    {
        if_grade = "D";
    }
    else if(grade > 00 && grade < 59)
    {
        if_grade = "F";
    }

    return if_grade;
}

std::string get_letter_grade_using_switch(int grade)
{
    std::string switch_grade;
    
    switch (grade/10) 
    {
    case 9:
        switch_grade = "A";
        break;
    case 8:
        switch_grade = "B";
        break;
    case 7:
        switch_grade = "C";
        break;
    case 6:
        switch_grade = "D";
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        switch_grade = "F";
        break;
    }

  return switch_grade;  
}