class Solution {
public:
    long long countCommas(long long n) {
        if (n<1000)
            return 0;

        long long p = n-999;

        if (n>=999999)
            p+=n-999999;

        if (n>=999999999)
            p+=n-999999999;

        if (n>=999999999999)
            p+=n-999999999999;

        if (n>=999999999999999)
            p+=n-999999999999999;

        return p;
    }
};