// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N) {
    // write your code in C99
    int check[X];
    unsigned int num_left = X;
    unsigned int i = 0;
    for(i = 0; i < X;i++) {
        check[i] = 1;   
    }
    i = 0;
    while (i < N) {
        if(A[i] <= X && check[A[i] - 1] == 1) {
            check[A[i] - 1] = 0;
            num_left--; 
            
            if(num_left == 0) {
                return i;   
            }
        }
        i++;   
    }
    
    return -1;
}