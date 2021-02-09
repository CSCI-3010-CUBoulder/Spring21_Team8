#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector> // can use a vector to hold test cases

TEST_CASE ("Factorials are computed", "[factorial]") {
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 362880);

}

TEST_CASE("incrementing values in integer vector", "[addN]") {
    std::vector<int> v{1,2,3,5,6,7,8,10};

    SECTION("checking with +ve n"){
        int n = 5;
        std::vector<int> res = AddN(v,n);
        srand(time(NULL));
        int random = rand()%v.size();
        REQUIRE(v.size() == res.size());
        REQUIRE( res[0] == 6);
        REQUIRE(res[v.size()-1] == 15);
        REQUIRE(res[random] == v[random]+n);
    }
    SECTION("checking with -ve n") {
        int n = -4;
        std::vector<int>res = AddN(v,n)
        srand(time(NULL));
        int random = rand()%v.size();
        REQUIRE(v.size() == res.size());
        REQUIRE( res[0] == -4);
        REQUIRE( res[v.size() -1] == 5);
        REQUIRE( res[random] == v[random] + n);
    }
}

// REQUIRE and CHECK
// REQUIRE needs to pass one assertions to attempt the next assertion

// CHECK tests all of them regardless of pass fail
//                   |
// TYPE THIS IN CMD \/

// ./test [factoriail]

// upload catch to repo
//write test cases in test.cpp file
// make changes on branches
// then merge into main branch
// everyone submits pull request and reviews pull request
