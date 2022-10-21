#include <stdio.h>

int preparation(double resistance[]);

int main()
{
    double resistance[100] = {0};

    int pair = 0;

    pair = preparation(resistance);

    return 0;

}

int preparation(double resistance[])
{
    double voltage[100] = {0}; 
    double current[100] = {0};
    int len = 0;
    double tmp = 0;

    puts("Inputs your values of voltage");

    int counter = 0;
    while(scanf(" %lf", &tmp) == 1)
    {
        voltage[counter] = tmp;
        counter++;
    }
    getchar();
    len = counter;

    puts("Inputs your values of current");
    counter = 0;

    while( (scanf(" %lf", &tmp) == 1) && (counter < len))
    {
        current[counter] = tmp;
        counter++;
    }

    len  = counter;

    for (int i = 0; i < len; i++)
    {
        if (current[i] != 0)
        {
            resistance[i] = voltage[i] / current[i];
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("voltage = %g, current = %g, resistance = %g\n", voltage[i], current[i], resistance[i]);
    }

    return len;
}