// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    result.A = malloc(sizeof(int)*M);
    result.M = M;

    int len = strlen(S);
    int occur[len][4];
    int sum[len+1][4];
    int i;
    int x;
    int y;
    
    for(i = 0;i < len;i++) {
        occur[i][0] = 0;
        occur[i][1] = 0;
        occur[i][2] = 0;
        occur[i][3] = 0;
    }
    
    for(i = 0;i < len;i++) {
        if(S[i] == 'A') occur[i][0]++;
        else if(S[i] == 'C') occur[i][1]++;
        else if(S[i] == 'G') occur[i][2]++;
        else if(S[i] == 'T') occur[i][3]++;
    }
    
    sum[0][0] = 0;
    sum[0][1] = 0;
    sum[0][2] = 0;
    sum[0][3] = 0;
    for(i = 1;i < (len + 1);i++) {
        sum[i][0] = sum[i - 1][0] + occur[i - 1][0];
        sum[i][1] = sum[i - 1][1] + occur[i - 1][1];
        sum[i][2] = sum[i - 1][2] + occur[i - 1][2];
        sum[i][3] = sum[i - 1][3] + occur[i - 1][3];
    }
    
    for(i = 0;i < M;i++) {
        x = P[i];
        y = Q[i];
        
        if(sum[y + 1][0] > sum[x][0]) result.A[i] = 1;
        else if(sum[y + 1][1] > sum[x][1]) result.A[i] = 2;
        else if(sum[y + 1][2] > sum[x][2]) result.A[i] = 3;
        else result.A[i] = 4;
    }
    
    return result;
}