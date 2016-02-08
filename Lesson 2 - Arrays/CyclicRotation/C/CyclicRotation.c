struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 4.8.2)
    result.A = malloc(sizeof(int)*N);
    result.N = N;
    
    int temp;
    int i = 0;
    for(i = 0;i < N;i++) {
        if(K > N) {
            temp = (K % N) + i; 
        } else {
            temp = K + i;
        }
        if(temp >= N) temp -= N;
        result.A[temp] = A[i];   
    }
    
    return result;
}