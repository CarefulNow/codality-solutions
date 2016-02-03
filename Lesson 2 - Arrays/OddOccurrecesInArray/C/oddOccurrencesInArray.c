int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int i = 0;
    unsigned int result = 0;
    
    for(i = 0;i < N;i++) {
        result ^= A[i];       
    }
    
    return result;
}