cmake_minimum_required(VERSION 3.0.0)
project(abstract_factory VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

add_library(abstract_factory
            factory.cpp)

add_library(abstract_products
            product1.cpp
            product2.cpp
            product3.cpp)

add_library(factoryA 
            factoryA.cpp
            product1A.cpp
            product2A.cpp
            product3A.cpp)

target_link_libraries(factoryA abstract_factory abstract_products)

add_library(factoryB 
            factoryB.cpp
            product1B.cpp
            product2B.cpp
            product3B.cpp)

target_link_libraries(factoryB abstract_factory abstract_products)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(GTest REQUIRED)

add_executable(test_abstract_factory
               test_abstract_factory.cpp)

# Tester includes
target_include_directories(
    test_abstract_factory
    PUBLIC ${GTEST_INCLUDE_DIRS}
)

# Tester libraries
target_link_libraries(
    test_abstract_factory
    factoryA
    factoryB
    ${GTEST_LIBRARIES}
)

add_test(NAME test_abstract_factory
         COMMAND test_abstract_factory)
