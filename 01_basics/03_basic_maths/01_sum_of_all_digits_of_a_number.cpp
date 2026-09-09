#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void sumOfDigits(int N) {
        int sum = 0;
        int newNum = N;
        while(newNum>0) {
            sum+=newNum%10;
            newNum=newNum/10;
        }
        cout <<"the sum of the digits is: " << sum << "\n";
    }

};

int main() {
    Solution sol;
    int N = 7789;
    sol.sumOfDigits(N);
    return 0;
}