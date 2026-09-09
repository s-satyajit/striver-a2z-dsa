#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void findGcd(int n1, int n2) {
        for(int i = min(n1, n2); i >= 1; i--) {
            if(n1%i==0 && n2%i==0) {
                cout << i;
                break;
            }
        }
    }
};

int main() {
    Solution sol;
    int N1 = 13;
    int N2 = 18;
    sol.findGcd(N1, N2);
    return 0;
}