#include "lab.h"

int main()
{
    float resistance[MAX_EXPERIMENT_COUNT] = {};
    int count = preparation(resistance);
    printf("%d\n", count);

    return 0;
}