int Solution::trailingZeroes(int A) {
    int i=5;
    int ans = 0;
    while(i<=A){
        ans += A/i;
        i *= 5;
    }
    return ans;
}
