#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void countDigits(int N) {
        // int counter = 0;
        // int newNum = N;
        // while(newNum>0) {
        //     newNum/=10;
        //     counter++;
        // }

        // another way of counting the number of digits is:

        int counter = (int) (log10(N) + 1);

        cout << "the number of digits: " << counter << "\n";
    }
};

int main() {
    Solution sol;
    int N = 7789;
    sol.countDigits(N);
    return 0;
}