int solution(int A[], int N) {
    // write your code in C99
    unsigned int cars_west = 0;
    unsigned int sum = 0;
    int i;
    for(i = 0;i < N;i++) {
        if(A[i] == 1) cars_west++;       
    }
    for(i = 0;i < N;i++) {
        A[i] == 0 ? sum += cars_west : cars_west--;
        if(sum > 1000000000) return -1;
    }
    
    return sum;
}