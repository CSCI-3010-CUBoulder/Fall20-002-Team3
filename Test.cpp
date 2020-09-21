#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_impliment.cpp"
#include <vector>

TEST_CASE( "Subtract N from each element in a vector", "[SubtractN]" ) {
    std::vector<int> marks {50, 45, 47};
    REQUIRE( SubtractN(marks[0],10) == 40 );
    REQUIRE( SubtractN(marks[1],10) == 35 );
    REQUIRE( SubtractN(marks[2],10) == 37 );
}

TEST_CASE( "Add N from each element in a vector", "[AddN]" ) {
    std::vector<int> marks {50, 45, 47};
    REQUIRE( AddN(marks[0],10) == 60 );
    REQUIRE( AddN(marks[1],10) == 55 );
    REQUIRE( AddN(marks[2],10) == 57 );
}
