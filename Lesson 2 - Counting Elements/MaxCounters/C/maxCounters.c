struct Results solution(int N, int A[], int M) {
    struct Results result;
    // write your code in C99
    result.C = malloc(sizeof(int)*N);
    result.L = N;
    int max = 0;
    int temp_max = 0;
    int i;
    for(i = 0;i < N;i++) {
        result.C[i] = 0;   
    }
    for(i = 0;i < M;i++) {
        if(A[i] <= N && A[i] > 0) {
            if(max > result.C[A[i] - 1]) result.C[A[i] - 1] = max;
            result.C[A[i] - 1]++;
            if(temp_max < result.C[A[i] - 1]) temp_max = result.C[A[i] - 1];
        } else if (A[i] > N) {
            max = temp_max;   
        }
    }
    for(i = 0;i < N;i++) {
        if(result.C[i] < max) result.C[i] = max;   
    }
    
    return result;
}