void ReadBMSParametersfromConsole(float* Temp,float* SOC , int TotalSamples);

float CalculateMinValue((float* InputData , int TotalSamples);

float CalculateMaxValue(float* InputData , int TotalSamples);
                        
float CalculateAvg(float* InputData, int TotalSamples);
                        
void CalculateSMA(float *input, int windowsize, float *movingAvg);
                   
void PrintMinMaxValues(float* Temp, float* SOC, int TotalSamples) ;
                        

