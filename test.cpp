#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Checking if number is positive or negative", "[Sign]"){
    REQUIRE( Sign(10) == 1);
    REQUIRE( Sign(-10) == -1);
    REQUIRE( Sign(1) == 1);
}

TEST_CASE ("Adding a value to a vector", "[AddN]"){
    std::vector<int> v{10, 20, 30};
    REQUIRE( AddN(v, 1) == {11, 21, 31});
    REQUIRE( AddN(v, 2) == {12, 22, 32});
    REQUIRE( AddN(v, 3) == {13, 23, 33});
}