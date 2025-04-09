int divide(int dividend, int divisor) {
    if(dividend == divisor) {
        return 1;
    }
    bool sign = true;
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        sign = false;
    }
    long n = labs((long)dividend);
    long d = labs((long)divisor);
    long ans = 0;
    while(d <= n) {
        int count = 0;
        while(n > (d << (count+1))) {
            count ++;
        }
        n -= d << count;
        ans += 1<<count;;
    }
    if(ans >= INT_MAX && sign) {
        return INT_MAX;
    }
    if(ans <= INT_MIN && !sign) {
        return INT_MIN;
    }

    return sign ? ans : (-1 * ans);
    
}