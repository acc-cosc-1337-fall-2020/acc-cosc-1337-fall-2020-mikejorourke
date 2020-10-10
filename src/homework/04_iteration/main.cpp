//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cout, std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
 string dna;
   int choice;
   char again;
   cout << "1 for Get GC Content: ";
   cout << "2 for Get DNA Complement: ";

   do
   {
       cout << "Enter you choice: ";
       cin >> choice;
       cout << "Enter DNA: ";
       cin >> dna;
       switch (choice)
       {
       case 1:
           cout << "GC Content: " << get_gc_content(dna);
           break;
       case 2:
           cout << "DNA Complement: " << get_dna_complement(dna);
           break;
       case 3:
           cout << "Invalid choice: ";
           break;
       }
       cout << "Do you want to Continue (y/Y or n/N): ";
       cin >> again;
   } while (again =='y' || again =='Y');
  system("pause");
   
 return 1;
}