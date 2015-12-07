int solution(int A, int B, int K) {
    // write your code in C99
    if(A % K == 0) return (((B - A)/K) + 1);
    return (B - (A - (A % K)))/K;
}