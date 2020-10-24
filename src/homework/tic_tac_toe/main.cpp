#include "tic_tac_toe_3.h"

int main() 
{
	tic_tac_toe_board boardObj;
	string first = "";
	cout<< "Enter X or O";
	cin>> first;
	
	boardObj.start_game(first);	
	

	return 0;
}
