#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "test/catch.hpp"
#include "receiver/receiver.h"
#include <string.h>
#include <stdio.h>

TEST_CASE("Test for finding Max , Min and Avg value") 
{
  float temp[5]= {2, 5, 10, 15, 20};
  float Max = CalculateMaxValue(temp, 5);
  float Min = CalculateMinValue(temp, 5);
  float Avg = CalculateAvg(temp , 5);
  REQUIRE(Max == 20f);
  REQUIRE(Min == 2f);
  REQUIRE( abs(Avg - 10.4f ) <=0.001);
}
