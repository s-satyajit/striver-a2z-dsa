#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void numsNtoOne(int i, int n) {
        if(i>n) return;
        numsNtoOne(i+1, n);
        cout << i << "\n";
    }
};

int main() {
    Solution sol;
    int N = 10;
    sol.numsNtoOne(1, N);
    return 0;
}