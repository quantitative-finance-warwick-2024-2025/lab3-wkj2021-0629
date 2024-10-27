set(SRC_FILES test_subtract.cpp ${CMAKE_SOURCE_DIR}/src/exercises.cpp)
add_executable(test_subtract ${SRC_FILES})
target_include_directories(test_subtract PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME test_subtract COMMAND test_subtract)

set(SRC_FILES test_fib.cpp ${CMAKE_SOURCE_DIR}/src/exercises.cpp)
add_executable(test_fib ${SRC_FILES})
target_include_directories(test_fib PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME test_fib COMMAND test_fib) 

set(SRC_FILES benchmark_fib.cpp ${CMAKE_SOURCE_DIR}/src/exercises.cpp)
add_executable(benchmark_fib ${SRC_FILES})
target_include_directories(benchmark_fib PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME benchmark_fib COMMAND benchmark_fib -r console -o fib_benchmark.txt) 

# expose project root directory to source code so it can find the files
add_definitions(-DPROJECT_ROOT_DIR="${CMAKE_SOURCE_DIR}")

add_executable(check_benchmark_results check_benchmark_results.cpp)
target_include_directories(check_benchmark_results PUBLIC ${CMAKE_SOURCE_DIR}/extern/catch2)
add_test(NAME check_benchmark_results COMMAND check_benchmark_results) 
