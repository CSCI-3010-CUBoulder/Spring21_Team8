#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Factorials are computed", "[Factorial]" ){
  REQUIRE(Factorial(0) == 1);
  REQUIRE(Factorial(1) == 1);
}
