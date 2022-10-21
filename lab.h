#ifndef LAB_HEADER
#define LAB_HEADER

#include <stdio.h>
#include <math.h>

#define FLT_EPSILON 1e-30

#define MAX_EXPERIMENT_COUNT 100

#define MAX_RESISTANCE_DEVIATION 0.03

#define DATA_FILE_NAME "data.txt"

int preparation(float resistance[]); 

int data_select(int M, float resistance[]); 

float result(int K, float resistance[]); 

int check(int K, float resistance[], float resistance_final);

#endif //LAB_HEADER