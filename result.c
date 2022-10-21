#include "lab.h"

float result(int K, float resistance[])
{
    float resistance_final = 0, deviation = 0;

    for (int i = 0; i < K; i++)
        resistance_final += resistance[i];

    resistance_final /= K;

    for (int i = 0; i < K; i++)
        deviation += (resistance[i] - resistance_final)*(resistance[i] - resistance_final);

    deviation = sqrt(deviation) / K;

    printf("The desired resistance and standart deviation\n%.3lg +- %.3lg\n", resistance_final, deviation);

    return resistance_final;
}
