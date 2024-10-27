#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "exercises.h"

TEST_CASE("test loop version", "[tests]")
{
    REQUIRE(fib_loop(0) == 0);
    REQUIRE(fib_loop(1) == 1);
    REQUIRE(fib_loop(2) == 1);
    REQUIRE(fib_loop(3) == 2);
    REQUIRE(fib_loop(4) == 3);
    REQUIRE(fib_loop(5) == 5);
    REQUIRE(fib_loop(6) == 8);
    REQUIRE(fib_loop(7) == 13);
    REQUIRE(fib_loop(8) == 21);
    REQUIRE(fib_loop(25) == fib_loop(23) + fib_loop(24));
}

TEST_CASE("test recursive version", "[tests]")
{
    REQUIRE(fib_recursion(0) == 0);
    REQUIRE(fib_recursion(1) == 1);
    REQUIRE(fib_recursion(2) == 1);
    REQUIRE(fib_recursion(3) == 2);
    REQUIRE(fib_recursion(4) == 3);
    REQUIRE(fib_recursion(5) == 5);
    REQUIRE(fib_recursion(6) == 8);
    REQUIRE(fib_recursion(7) == 13);
    REQUIRE(fib_recursion(8) == 21);
    REQUIRE(fib_recursion(25) == fib_recursion(23) + fib_recursion(24));
}

TEST_CASE("test tail recursive version", "[tests]")
{
    REQUIRE(fib_t_recursion(0) == 0);
    REQUIRE(fib_t_recursion(1) == 1);
    REQUIRE(fib_t_recursion(2) == 1);
    REQUIRE(fib_t_recursion(3) == 2);
    REQUIRE(fib_t_recursion(4) == 3);
    REQUIRE(fib_t_recursion(5) == 5);
    REQUIRE(fib_t_recursion(6) == 8);
    REQUIRE(fib_t_recursion(7) == 13);
    REQUIRE(fib_t_recursion(8) == 21);
    REQUIRE(fib_t_recursion(25) == fib_t_recursion(23) + fib_t_recursion(24));
}
