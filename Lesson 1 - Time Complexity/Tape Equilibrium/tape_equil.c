// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
int abs(int x) {
    return (x > 0 ? x : -x);   
}


int solution(int A[], int N) {
    // write your code in C99
    unsigned int sum_a = 0;
    unsigned int sum_b = 0;
    unsigned int min_diff = ~0;
    unsigned int tmp_diff = 0;
    int i;
    for(i = 0;i < N; i++) {
        sum_b += A[i];   
    }
    int j;
    for(j = 0;j < N-1;j++) {
        sum_a += A[j];
        sum_b -= A[j];
        
        tmp_diff = abs(sum_a - sum_b);
        if(tmp_diff < min_diff) {
            min_diff = tmp_diff;   
        }
    }
    
    return min_diff;
}
