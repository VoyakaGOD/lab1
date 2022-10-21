#include "lab.h"

int check(int K, float resistance[], float resistance_final)
{
    float sum = 0;
    int count = sizeof(resistance) / sizeof(float);
    for(int i = 0; i < count; i++)
        sum += resistance[i] - resistance_final;

    return (-FLT_EPSILON < sum) && (sum < FLT_EPSILON);
}