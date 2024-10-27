#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "exercises.h"

TEST_CASE("case 1", "[tests]")
{
    REQUIRE(minus(10, 5) == 5);
}

TEST_CASE("case 2", "[tests]")
{
    REQUIRE(minus(-2, -1) == -1);
}

TEST_CASE("case 3", "[tests]")
{
    REQUIRE(minus(2, -1) == 3);
}
