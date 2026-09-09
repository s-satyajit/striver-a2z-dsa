#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool checkPrime(int N) {
        for(int i = 2; i*i<=N; i++) {
            if(N%i==0) return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    int N = 13;
    cout << boolalpha << sol.checkPrime(N);
    return 0;
}