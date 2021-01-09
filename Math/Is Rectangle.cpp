int Solution::solve(int A, int B, int C, int D) {
    return ((A==B and C==D) or (A==C and B==D) or (A==D and B==C));
}
