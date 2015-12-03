// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
int solution(int A[], int N) {
    // write your code in C99
    int sum = 0;
    int i = 0;
    for(i = 0;i < N;i++) {
        sum = sum ^ A[i] ^ (i + 1);
    }
    
    return (sum ^ (N + 1));
}