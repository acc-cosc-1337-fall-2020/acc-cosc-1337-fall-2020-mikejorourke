#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<string>
#include "vec.cpp"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test value and reference parameters")
{
 int num1= 0, num2 = 0
 pass_by_val_and_ref(num1, num2);
 REQUIRE(num1 == 0);
 REQUIRE(num2 == 50);
}

TEST_CASE("Test Function Value parameter with string")
{
 std:: string str = "john";
 
 loop_string_w_index(str);
 
 REQUIRE(str == "john");
}

TEST_CASE("Test Function reference parameter with string")
{
 std::string str = "john";

 loop_string_w_ref(str);

 REQUIRE(str == "zzzz"); 
}