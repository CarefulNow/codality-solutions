// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include "string.h"

int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int* check = malloc(sizeof(int)*2000001);
    int num_dist = 0;
    memset(check, 0, (2000001*sizeof(int)));
    int i = 0;
    
    for(i = 0;i < N;i++) {
        if(check[A[i] + 1000001] == 0) {
            num_dist++;
            check[A[i] + 1000001]++;
        }
    }
    
    return num_dist;
}