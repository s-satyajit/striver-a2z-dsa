#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void pattern20(int N) {
        int spaces = 2*N-2;
        for(int i = 1; i < N*2; i++) {
            int stars = i;
            if(i > N) stars = 2*N-i;

            for(int j = 1; j <= stars; j++) {
                cout << "*";
            }
            for(int j = 0; j < spaces; j++) {
                cout << " ";
            }
            for(int j = 1; j <= stars; j++) {
                cout << "*";
            }
            if(i<N) spaces-=2;
            else spaces+=2;
            cout << endl;
        }
    }
};

int main() {
    Solution sol;
    int N = 5;
    sol.pattern20(N);
    return 0;
}