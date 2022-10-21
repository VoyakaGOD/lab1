#include "lab.h"

int preparation(float resistance[])
{   
    FILE* data = fopen(DATA_FILE_NAME, "r");
    float voltage[MAX_EXPERIMENT_COUNT] = {0}; 
    float current[MAX_EXPERIMENT_COUNT] = {0};
    int len = 0;
    float tmp_voltage = 0;
    float tmp_current = 0;
    int counter = 0;

    printf("Input file: %s\n", DATA_FILE_NAME);

    while( (fscanf(data, " %f%*c%f", &tmp_voltage, &tmp_current) != EOF) && (counter < MAX_EXPERIMENT_COUNT))
    {
        voltage[counter] = tmp_voltage;
        current[counter] = tmp_current;
        counter++;
    }

    len  = counter;

    for (int i = 0; i < len; i++)
    {
        if (current[i] != 0)
        {
            resistance[i] = voltage[i] / current[i] * 1000;
        }
    }

    return len;
}