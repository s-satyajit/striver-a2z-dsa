#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void findArmstrongNum(int N) {
        int newNumber=N;
        int extractedDig;
        int sum=0;
        while(newNumber>0) {
            extractedDig=newNumber%10;
            sum+=pow(extractedDig, 3);
            newNumber/=10;
        }
        if(sum==N) 
            cout << "armstrong number";
        else
            cout << "not armstrong";
    }
};

int main() {
    Solution sol;
    int N = 153;
    sol.findArmstrongNum(N);
    return 0;
}