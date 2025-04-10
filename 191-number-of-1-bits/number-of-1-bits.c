int hammingWeight(int n) {
    // uint32_t a = 0x0101010101010101;
    // uint32_t b = 0x0011001100110011;
    // uint32_t c = 0x0000111100001111;
    // uint32_t d = 0x0000000011111111;
    // p1 = (n >> 0) & a;
    // p2 = (n >> 1) & a;
    // p = p1+p2;
    // q1 = (n >> 0) & b;
    // q2 = (n >> 2) & b;
    // q = q1+q2;
    // r1 = (n >> 0) & c;
    // r2 = (n >> 4) & c;
    // r = r1+r2;
    // s1 = (n >> 0) & d;
    // s2 = (n >> 8) & d;

    // s = s1+s2;
    // return s;
    int count = 0;
  while (n > 0){
    n &= (n - 1);  
    count += 1;
  }
  return count;
}