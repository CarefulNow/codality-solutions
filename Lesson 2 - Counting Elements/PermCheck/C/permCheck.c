int solution(int A[], int N) {
    // write your code in C99
    unsigned int check[N];
    int i;
    for(i = 0;i < N;i++) {
        check[i] = 0;
    }
    for(i = 0;i < N;i++) {
        if(A[i] > N || A[i] < 1) return 0;
        if(check[A[i] - 1] == 0) {
            check[A[i] - 1] = 1;
        } else return 0;
    }

    return 1;
}