int solution(int A[], int N) {
    // write your code in C99
    int x = N + 1;
    int check[x];
    int i;
    for(i = 0;i < x;i++) {
        check[i] = 0;   
    }
    for(i = 0;i < N;i++) {
        if(A[i] > 0 && A[i] < x) {
            check[A[i] - 1] = 1;
        }
    }
    for(i = 0;i < x;i++) {
        if(check[i] == 0) return (i + 1);   
    }
    return -1;
}