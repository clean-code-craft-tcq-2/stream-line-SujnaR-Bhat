define CATCH_CONFIG_MAIN 

#include "test/catch.hpp"
#include "sender/sender.h"

TEST_CASE("Check whether reading and passing of the data is successful") 
{
  float Temperature[TotalSamples] = {0};
  float StateOfCharge[TotalSamples] = {0};
  float ChargeRate[TotalSamples] = {0};
  float ExpectedOutput[3][3] = {{2,5,0.0}, {55,67,0.72},{35,47,0.38}};
  
  ReadBMSParametersFromFile(Temperature,StateOfCharge,ChargeRate);
  int j= 0, i= 0;
  for(i=0;i<3;i++)
  {
    REQUIRE(Temperature[j] == ExpectedOutput[i][0]);
    REQUIRE(StateOfCharge[j] == ExpectedOutput[i][1]);
    REQUIRE(ChargeRate[j] == ExpectedOutput[i][2]);
    j++;
  }
    SendBMSParameters();
}
