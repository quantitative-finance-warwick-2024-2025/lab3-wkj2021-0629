#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <filesystem>
#include <iostream>

TEST_CASE("Check for release results file", "[compare_output]")
{
    const std::filesystem::path root = PROJECT_ROOT_DIR;

    std::ifstream stream(root / "benchmarks" / "fib_benchmark_release.txt");
    REQUIRE(stream.is_open());
}

TEST_CASE("Check for debug results file", "[compare_output]")
{
    const std::filesystem::path root = PROJECT_ROOT_DIR;

    std::ifstream stream(root / "benchmarks" / "fib_benchmark_debug.txt");
    REQUIRE(stream.is_open());
}

TEST_CASE("Check for comments file", "[compare_output]")
{
    const std::filesystem::path root = PROJECT_ROOT_DIR;

    std::ifstream stream(root / "benchmarks" / "comments.txt");
    REQUIRE(stream.is_open());
}
