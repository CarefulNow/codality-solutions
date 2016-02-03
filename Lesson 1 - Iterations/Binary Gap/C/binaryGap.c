int solution(int N) {
    // write your code in C99 (gcc 4.8.2)
    unsigned short current_gap = 0;
    unsigned short max_gap = 0;
    unsigned short trailing = 0;
    
    while(N > 0) {
        if(N & 1) {
            current_gap = 0;
            if(!trailing) trailing = 1;
        } else {
            if(trailing) {
                current_gap++;
                if(current_gap > max_gap) max_gap = current_gap;
            }
        }
        N = N >> 1;
    }
    
    return max_gap;
}