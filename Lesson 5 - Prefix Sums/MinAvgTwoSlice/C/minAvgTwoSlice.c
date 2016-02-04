// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int start_index = 0;
    int i = 0;
    double min_avg = (double)(A[0] + A[1])/2;
    double temp2 = 0;
    double temp3 = 0;
    
    for(i = 0;i < (N - 1);i++) {
        temp2 = (double)(A[i] + A[i + 1])/2;
        if(i < (N - 2)) temp3 = (double)(A[i] + A[i + 1] + A[i + 2])/3;
        if(temp2 < min_avg) {
            min_avg = temp2;
            start_index = i;
        } 
        if(temp3 < min_avg) {
            min_avg = temp3;
            start_index = i;
        }
    }
    
    return start_index;
}