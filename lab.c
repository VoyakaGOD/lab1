#include "lab.h"

int main()
{
    float resistance[MAX_EXPERIMENT_COUNT] = {};
    int M = preparation(resistance);
    int K = data_select(M, resistance);
    printf("%d\n", K);

    return 0;
}