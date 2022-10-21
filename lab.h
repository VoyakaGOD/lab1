#ifndef LAB_HEADER
#define LAB_HEADER

#include <stdio.h>

#define FLT_EPSILON 1e-30

#define MAX_EXPERIMENT_COUNT 100

int preparation(float resistance[]); 

int data_select(int M, float resistance[]); 

float result(int K, float resistance[]); 

int check(int K, float resistance[], float resistance_final);

#endif //LAB_HEADER