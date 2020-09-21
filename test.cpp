#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Test of Addn","AddN"){
    std::vector<int> mmm {1,3,5,7,9};
    std::vector<int> tmp {2,4,6,8,10};
    REQUIRE(AddN(mmm,1)== tmp);
    tmp={3,5,7,9,11};
    REQUIRE(AddN(mmm,2)==tmp);
    tmp={4,6,8,10,12};
    REQUIRE(AddN(mmm,3)==tmp);
}

TEST_CASE("Test of SubtractN","SubtractN"){
    std::vector<double> mmm = {4.0,6.0,8.0,10.0,12.0};
    std::vector<double> tmp {3.0,5.0,7.0,9.0,11.0};
    REQUIRE(SubtractN(mmm,1.0)==tmp);
    tmp={2.0,4.0,6.0,8.0,10.0};
    REQUIRE(SubtractN(mmm,2.0)==tmp);
    tmp={1.0,3.0,5.0,7.0,9.0};
    REQUIRE(SubtractN(mmm,3.0)==tmp);
}