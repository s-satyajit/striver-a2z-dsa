#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void checkPalindrome(int N) {
        int newNum=N;
        int reversedNum=0;
        int extractDig;
        while(newNum>0) {
            extractDig=newNum%10;
            reversedNum=reversedNum*10+extractDig;
            newNum/=10;
        }
        if(reversedNum==N) cout << "palindrome";
        else cout << "not palindrome";
    };
};

int main() {
    Solution sol;
    int N = 133100;
    sol.checkPalindrome(N);
    return 0;
}