#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_ENABLE_BENCHMARKING
#include "catch.hpp"

#include "exercises.h"


TEST_CASE("Benchmark fibonacci"){
    BENCHMARK("Fibonacci with loop") {
        return fib_loop(30);
    };

    BENCHMARK("Fibonacci with recursion") {
        return fib_recursion(30);
    };

    BENCHMARK("Fibonacci with tail recursion") {
        return fib_t_recursion(30);
    };
}