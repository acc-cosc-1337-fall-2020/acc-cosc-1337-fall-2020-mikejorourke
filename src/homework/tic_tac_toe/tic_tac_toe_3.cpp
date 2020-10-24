#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
void tic_tac_toe_board::start_game(string first_player)
{
    if (first_player == "o")
    {
        xoro = false;
    }
    while (!check_board_full())
    {
        cout << "Enter next move, 1-9 ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (xoro)
            {
                num1 = "x";
                xoro = false;
            }
            else
            {
                num1 = "o";
                xoro = true;
            }
            cout << refresh_board();

            break;
        case 2:
            if (xoro)
            {
                num2 = "x";
                xoro = false;
            }
            else
            {
                num2 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 3:
            if (xoro)
            {
                num3 = "x";
                xoro = false;
            }
            else
            {
                num3 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 4:
            if (xoro)
            {
                num4 = "x";
                xoro = false;
            }
            else
            {
                num4 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 5:
            if (xoro)
            {
                num5 = "x";
                xoro = false;
            }
            else
            {
                num5 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 6:
            if (xoro)
            {
                num6 = "x";
                xoro = false;
            }
            else
            {
                num6 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 7:
            if (xoro)
            {
                num7 = "x";
                xoro = false;
            }
            else
            {
                num7 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 8:
            if (xoro)
            {
                num8 = "x";
                xoro = false;
            }
            else
            {
                num8 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 9:
            if (xoro)
            {
                num9 = "x";
                xoro = false;
            }
            else
            {
                num9 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        default:
            break;
        }
    }
}


string tic_tac_toe_board::refresh_board()
{
    board = num1 + " | " + num2 + " | " + num3 + "\n" + num4 + " | " + num5 + " | " + num6 + "\n" + num7 + " | " + num8 + " | " + num9 + "\n";
    return board;
}

string tic_tac_toe_board::get_player()
{
    if (xoro)
    {
        return "x";
    }
    else
    {
        return "o";
    }
}

void tic_tac_toe_board::mark_board(int pos)
{
    switch (pos)
        {
        case 1:
            if (xoro)
            {
                num1 = "x";
                xoro = false;
            }
            else
            {
                num1 = "o";
                xoro = true;
            }
            cout << refresh_board();

            break;
        case 2:
            if (xoro)
            {
                num2 = "x";
                xoro = false;
            }
            else
            {
                num2 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 3:
            if (xoro)
            {
                num3 = "x";
                xoro = false;
            }
            else
            {
                num3 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 4:
            if (xoro)
            {
                num4 = "x";
                xoro = false;
            }
            else
            {
                num4 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 5:
            if (xoro)
            {
                num5 = "x";
                xoro = false;
            }
            else
            {
                num5 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 6:
            if (xoro)
            {
                num6 = "x";
                xoro = false;
            }
            else
            {
                num6 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 7:
            if (xoro)
            {
                num7 = "x";
                xoro = false;
            }
            else
            {
                num7 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 8:
            if (xoro)
            {
                num8 = "x";
                xoro = false;
            }
            else
            {
                num8 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        case 9:
            if (xoro)
            {
                num9 = "x";
                xoro = false;
            }
            else
            {
                num9 = "o";
                xoro = true;
            }
            cout << refresh_board();
            break;
        default:
            break;
        }
}

string tic_tac_toe_board::display_board()
{
    return refresh_board();
}

void tic_tac_toe_board::set_next_player()
{
    if (xoro)
    {
        xoro = false;
    }
    else
    {
        xoro = true;
    }
}

bool tic_tac_toe_board::check_board_full()
{
    if (num1 != " " && num2 != " " && num3 != " " && num4 != " " && num5 != " " && num6 != " " && num7 != " " && num8 != " " && num9 != " ")
    {
        return true;
    }
    return false;
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
