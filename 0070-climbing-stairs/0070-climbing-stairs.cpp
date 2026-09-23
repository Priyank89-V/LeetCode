class Solution {
public:
   int climbStairs(int n) {
    if (n <= 2) return n;

    vector<int> p(n + 1);
    p[1] = 1;
    p[2] = 2;

    for (int i = 3; i <= n; i++) {
        p[i] = p[i - 1] + p[i - 2];
    }
    return p[n];
}
};