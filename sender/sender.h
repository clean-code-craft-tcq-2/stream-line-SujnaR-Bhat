#define TotalSamples 50

void ReadBMSParametersFromFile(float* Temperature, float* SOC, float* ChargeRate);
void PrintBMSParamsOnConsole(float* Temperature, float* SOC, float* ChargeRate);
void sendBMSParameters();
