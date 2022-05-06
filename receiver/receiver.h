void ReadBMSParametersfromConsole(float* Temp,float* SOC , int TotalSamples);

float CalculateMinValue((float* InputData , int TotalSamples);

float CalculateMaxValue(float* InputData , int TotalSamples);
                        

float computeAvg(float* InputData, int TotalSamples);
                        
void computeSMA(float *input, int windowsize, float *movingAvg);
                        
void BMSReceiver(float* Temp,float* SOC , int TotalSamples);
