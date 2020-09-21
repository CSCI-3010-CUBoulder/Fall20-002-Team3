#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Test of Addn","AddN"){
    std::vector<int> mmm = [1,3,5,7,9];
    REQUIRE(AddN(mmm,1)==[2,4,6,8,10]);
    REQUIRE(AddN(mmm,2)==[3,5,7,9,11]);
    REQUIRE(AddN(mmm,3)==[4,6,8,10,12]);
}

TEST_CASE("Test of SubtractN","SubtractN"){
    std::vector<double> mmm = [4.0,6.0,8.0,10.0,12.0];
    REQUIRE(AddN(mmm,1.0)==[3.0,5.0,7.0,9.0,11.0]);
    REQUIRE(AddN(mmm,2.0)==[2.0,4.0,6.0,8.0,10.0]);
    REQUIRE(AddN(mmm,3.0)==[1.0,3.0,5.0,7.0,9.0]);
}