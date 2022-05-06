#include <stdio.h>
#include "receiver.h"
#include "math.h"

void ReadBMSParametersfromConsole(float* Temp,float* SOC , int TotalSamples)
{
  char ReadString[250];
  
  for(int i=0; i<TotalSamples ; i++)
    {
	    if(scanf("%50s", ReadString) == EOF) 
       {
            break;
        }
        scanf("%f",&Temp[i]);
        scanf("%20s", ReadString); //deg
        scanf("%20s", ReadString); //C 
         scanf("%20s", ReadString); //,
        scanf("%f",&SOC[i]);
    }
}

float CalculateMinValue((float* InputData[] , int TotalSamples)
{
  float MinValue = InputData[0];
    for(int i=1; i<TotalSamples; i++)
    {
        if(MinValue > InputData[i])
        {
            MinValue = InputData[i];
        }
    }
    return MinValue;
}
                        

float CalculateMaxValue(float* InputData[] , int TotalSamples)
{
  float MaxValue = InputData[0];
    for(int i=1; i<TotalSamples; i++)
    {
        if(MaxValue < InputData[i])
        {
            MaxValue = InputData[i];
        }
    }
    return MaxValue;
}
                        

float computeAvg(float* InputData[], int TotalSamples)
{
    float avg = 0;
    float sum = 0;
    for(int i = 0; i < TotalSamples; i++)
    {
        sum = sum + input[i];
    }
    avg = sum/TotalSamples;
    return avg;
}
