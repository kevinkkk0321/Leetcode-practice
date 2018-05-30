/*For a given number n, we are looking how many numbers <=n have factor 5, 5×5, 5x5x5, …*/
int trailingZeroes(int n) {
    int count=0;
    
    while(n){
        count += n/5; 
        n/=5;
    }
    return count;
}

/*online answer*/
int trailingZeroes(int n) {
    return n < 5 ? 0 : n /5 + trailingZeroes(n / 5);
  }