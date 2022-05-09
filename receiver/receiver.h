void ReadBMSParametersfromConsole(float* temp,float* SOC , int TotalSamples);

float CalculateMinValue(float* InputData , int TotalSamples);

float CalculateMaxValue(float* InputData , int TotalSamples);
                        
float CalculateAvg(float* InputData, int TotalSamples);
                        
void CalculateSMA(float *InputData, int windowsize, float *movingAvg);
                   
void PrintMinMaxValues(float* temp, float* SOC, int TotalSamples) ;
                        

