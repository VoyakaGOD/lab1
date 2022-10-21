#ifndef LAB_HEADER
#define LAB_HEADER

#define FLT_EPSILON 1e-30

int preparation(float resistance[]); 

int data_select(int M, float resistance[]); 

float result(int K, float resistance[]); 

int check(int K, float resistance[], float resistance_final);

#endif //LAB_HEADER