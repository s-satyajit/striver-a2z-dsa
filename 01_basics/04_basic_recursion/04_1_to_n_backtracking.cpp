#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printNums1toN(int i) {
        if(i<1) return;
        printNums1toN(i-1);
        cout << i << "\n";
    }
};

int main() {
    Solution sol;
    int N = 10;
    sol.printNums1toN(N);
    return 0;
}