// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int max[3] = {(1 << 31), (1 << 31), (1 << 31)};
    int max_neg[2] = {(~0 & ~(1 << 31)), (~0 & ~(1 << 31))};
    int largest = 0;
    int sum[2] = {0, 0};
    int result = 0;
    
    int i;
    for(i = 0;i < N;i++) {
        if(A[i] > max[0] || A[i] > max[1] || A[i] > max[2]) {
            if(max[0] <= max[1] && max[0] <= max[2]) max[0] = A[i];
            else if(max[1] <= max[0] && max[1] <= max[2]) max[1] = A[i];
            else if(max[2] <= max[0] && max[2] <= max[1]) max[2] = A[i];   
        }
        if((A[i] < max_neg[0] || A[i] < max_neg[1]) && A[i] < 0) {
            if(max_neg[0] >= max_neg[1]) max_neg[0] = A[i];
            else max_neg[1] = A[i];
        }
    }
    if(max[0] >= max[1] && max[0] >= max[2]) largest = 0;
    else if(max[1] >= max[0] && max[1] >= max[2]) largest = 1;
    else if(max[2] >= max[1] && max[2] >= max[1]) largest = 2;

    sum[0] = max[0] * max[1] * max[2];
    sum[1] = max[largest] * max_neg[0] * max_neg[1];

    if(sum[0] > sum[1]) {
        result = sum[0];
    } else if(max_neg[0] == (~0 & ~(1 << 31)) || max_neg[1] == (~0 & ~(1 << 31))) {
        result = sum[0];
    } else {
        result = sum[1];
    }
    return result;
}