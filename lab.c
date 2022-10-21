#include "lab.h"

int main()
{
    int count = 0;
    float mid = 0;
    float resistance[MAX_EXPERIMENT_COUNT] = {};
    count = preparation(resistance);
    count = data_select(count, resistance);
    mid = result(count, resistance);
    check(count, resistance, mid);

    return 0;
}