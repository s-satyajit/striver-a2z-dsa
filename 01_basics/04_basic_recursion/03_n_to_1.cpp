#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printFromN(int curr) {
        if(curr<1) return;
        cout << curr << "\n";
        printFromN(curr-1);
    }
};

int main() {
    Solution sol;
    int N = 10;
    sol.printFromN(N);
    return 0;
}