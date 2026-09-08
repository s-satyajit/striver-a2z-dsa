#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void pattern18(int N) {
        for(int i = 0; i < N; i++) {
            for(char ch = 'E'-i; ch <= 'E'; ch++) {
                cout << ch;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    int N = 5;
    sol.pattern18(N);
    return 0;
}