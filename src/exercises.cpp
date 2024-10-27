#include <iostream>
#include "exercises.h"

/*
Exercise 1:
Implement the function minus(), which calculates the difference of two numbers.
This function should have two signed integer arguments and return a signed integer.
Check that it works by calling exercise_1() from main().
*/
void exercise_1()
{
    std::cout << minus(10, 5) << '\n';
    std::cout << minus(-2, -1) << '\n';
    std::cout << minus(2, -1) << '\n';
}

int minus(int n, int m)
{
    return 0;
}

/*
Exercise 2:
Implement the function with signature: unsigned int fib_loop(unsigned int n),
which calculates and returns the n'th Fibonacci number F_n. Your function should use a loop.
call exercise_2() from main() to print out the first 10 Fibonacci numbers using fib_loop.
*/
void exercise_2()
{
    std::cout << fib_loop(0);
    for (unsigned int i = 1; i < 10; ++i)
    {
        std::cout << ',' << fib_loop(i);
    }
    std::cout << '\n';
}

unsigned int fib_loop(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    unsigned int f_n;
    unsigned int f_n_minus_1 = 1;
    unsigned int f_n_minus_2 = 0;

    // implement the loop here

    return f_n;
}

/*
Exercise 3:
Write a function with the signature: unsigned int fib_recursion(unsigned int n)
It should calculate the n'th fibanacci number using recursion.
call exercise_3() from main() to print out the first 10 Fibonacci numbers using fib_recursion.
*/
void exercise_3()
{
    std::cout << fib_recursion(0);
    for (unsigned int i = 1; i < 10; ++i)
    {
        std::cout << ',' << fib_recursion(i);
    }
    std::cout << '\n';
}

unsigned int fib_recursion(unsigned int n)
{
    // implement base cases
    // implement the recursion in the return statement
    return 0;
}

/*
Exercise 4:
Write a function with the signature: unsigned int fib_t_recursion(unsigned int n)
It should calculate the n'th fibanacci number using tail recursion.
call exercise_4() from main() to print out the first 10 Fibonacci numbers.
*/
void exercise_4()
{
    std::cout << fib_t_recursion(0);
    for (unsigned int i = 1; i < 10; ++i)
    {
        std::cout << ',' << fib_t_recursion(i);
    }
    std::cout << '\n';
}

unsigned int fib_t_recursion_helper(unsigned int n, unsigned int f_n, unsigned int f_n_minus_1)
{
    // implement n == 1 case
    // implement the tail recursion in the return statement
    return 0;
}

unsigned int fib_t_recursion(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    return fib_t_recursion_helper(n, 1, 0);
}