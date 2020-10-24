#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe_3.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("tic_tac_toe test function") 
{
	tic_tac_toe_board test;
	test.mark_board(1);
	test.mark_board(2);
	test.mark_board(3);
	test.mark_board(4);
	test.mark_board(5);
	test.mark_board(6);
	test.mark_board(7);
	test.mark_board(8);
	test.mark_board(9);
	REQUIRE(test.tic_tac_toe_board :: check_board_full() == true);
}