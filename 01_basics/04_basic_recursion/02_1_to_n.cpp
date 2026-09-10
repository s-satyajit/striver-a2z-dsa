#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printToN(int count, int N) {
        if(count>N) return;
        cout << count << "\n";
        printToN(count+1, N);
    }
};

int main() {
    Solution sol;
    int N = 5;
    sol.printToN(1, N);
    return 0;
}