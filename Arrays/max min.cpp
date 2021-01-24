int Solution::solve(vector<int> &A) {
    int n = A.size();
    int l,s;
    if(n==0)
        return 0;
    l = A[0];
    s = A[0];
    for(int i=1;i<n;i++){
        l = min(l,A[i]);
        s = max(s,A[i]);
    }
    return l+s;
}
