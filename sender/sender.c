#include <stdio.h>
#include "sender.h"

void ReadBMSParametersFromFile(float* Temperature, float* SOC, float* ChargeRate)
{
    float Temperature, StateOfCharge, ChargeRate;
    FILE * Inputfile= fopen("./sender/sender.txt","r");  
    if (Inputfile!=NULL) 
    {
        for(int i=0;fscanf(file, "%f\t%f\t%f\n", &Temperature,&StateOfCharge,&ChargeRate)!=EOF ;i++)
        {
            *(Temperature+i) = Temperature;
            *(SOC+i)  = StateOfCharge;
            *(ChargeRate+i)   = ChargeRate;
        }
    }
    fclose(Inputfile);  
}

void PrintBMSParametersOnConsole(float* Temperature, float* SOC, float* ChargeRate)
{
  for (int i=0; i<TotalSamples; i++)
  {
    printf(" Temperature:%.2f deg C, State of Charge:%.2f, Charge Rate:%.2f\n",  *(Temperature+i),*(SOC+i),*(ChargeRate+i));
  }
}

void SendBMSParameters()
{
  float Temperature[TotalSamples] = {0};
  float StateOfCharge[TotalSamples]= {0};
  float ChargeRate[TotalSamples] = {0};
  ReadBMSParametersFromFile(Temperature, StateOfCharge, ChargeRate);
  PrintBMSParametersOnConsole(Temperature, StateOfCharge, ChargeRate);
}
