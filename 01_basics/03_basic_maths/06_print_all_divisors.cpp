#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> printDivisor(int N) {
        vector<int> res;
        for(int i = 2; i*i<=N; i++) {
            if(N%i==0){
                res.push_back(i);
                res.push_back(N/i);
            }    
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution sol;
    int N = 36;
    vector<int> result = sol.printDivisor(N);
    cout << "divisors of " << N << " :\n";
    for (int val : result) {
        cout << val << "\n";
    }
    return 0;
}