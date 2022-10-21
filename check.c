#include "lab.h"

int check(int K, float resistance[], float resistance_final)
{
    float sum = 0;
    for(int i = 0; i < K; i++)
        sum += resistance[i] - resistance_final;

    printf("Average deviation: %f", sum / K);

    return (-FLT_EPSILON < sum) && (sum < FLT_EPSILON);
}