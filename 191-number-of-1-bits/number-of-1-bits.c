int hammingWeight(int n) {
    int count = 0;
  while (n > 0){
    n &= (n - 1);  
    count += 1;
  }
  return count;
}