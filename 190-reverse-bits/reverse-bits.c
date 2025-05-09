uint32_t reverseBits(uint32_t n) {
    if(!n) {
        return 0;
    }
    int i = 0;
    uint32_t q = 0;
    while(n) {
        q = q<<1;
        q |= (n & 1);
        n = n>>1;
        i++;
    }
    q <<= (32-i);
    return q;
}