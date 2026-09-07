class Solution {
public:
    int hammingWeight(int n) {
        int p = 0;
        while(n != 0){
            n = n & n - 1;
            p++;
        }
        return p;
    }
};