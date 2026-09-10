#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int sumOfFirstN(int i, int sum) {
        if(i<1) return sum;
        return sumOfFirstN(i-1, sum+i);
    }
};

int main() {
    Solution sol;
    int N = 10;
    cout << sol.sumOfFirstN(N, 0);
    return 0;
}