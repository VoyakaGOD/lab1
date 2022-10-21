#include "lab.h"

int data_select(int pairs, float resistance[])
{
    float resistance_average = 0;
    float sum = 0;

    for (int  i = 0; i < pairs; i++)
    {
        sum += resistance[i];
    }

    resistance_average = sum / pairs;

    int read_pos = 0;
    int write_pos = 0;

    for (read_pos; read_pos < pairs; read_pos++)
    {   
        if (fabs(resistance[read_pos] - resistance_average) / resistance_average < MAX_RESISTANCE_DEVIATION)
        {
            resistance[write_pos] = resistance[read_pos];
            write_pos++;
        }
    }
    
    return write_pos;
}