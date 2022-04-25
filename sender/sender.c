#include <stdio.h>
#include "sender.h"

void ReadBMSParametersFromFile(float* Temp, float* SOC, float* ChrgRt)
{
    float Temperature, StateOfCharge, ChargeRate;
    FILE * Inputfile= fopen("./sender/sender.txt","r");  
    if (Inputfile!=NULL) 
    {
        for(int i=0;fscanf(Inputfile, "%f\t%f\t%f\n", &Temperature,&StateOfCharge,&ChargeRate)!=EOF ;i++)
        {
            *(Temp+i) = Temperature;
            *(SOC+i)  = StateOfCharge;
            *(ChrgRt+i)   = ChargeRate;
        }
    }
    fclose(Inputfile);  
}

void PrintBMSParametersOnConsole(float* Temp, float* SOC, float* ChrgRt)
{
  for (int i=0; i<TotalSamples; i++)
  {
    printf(" Temperature:%.2f deg C, State of Charge:%.2f, Charge Rate:%.2f\n",  *(Temp+i),*(SOC+i),*(ChrgRt+i));
  }
}

void SendBMSParameters()
{
  float Temperature[TotalSamples] = {0};
  float StateOfCharge[TotalSamples]= {0};
  float ChargeRate[TotalSamples] = {0};
  ReadBMSParametersFromFile(Temp, StateOfCharge, ChrgRt);
  PrintBMSParametersOnConsole(Temp, StateOfCharge, ChrgRt);
}
