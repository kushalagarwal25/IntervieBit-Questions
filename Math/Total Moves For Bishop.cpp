int Solution::solve(int a, int b) {
    return min(a-1,b-1) + min(8-a,b-1) + min(a-1,8-b) + min(8-a,8-b);
}
