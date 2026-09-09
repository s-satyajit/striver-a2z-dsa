#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void reverseDigits(int N) {
        int newNumber = N;
        int reversedNumber = 0;
        int extractedDigit;
        while(newNumber>0) {
            extractedDigit=newNumber%10;
            reversedNumber=reversedNumber*10+extractedDigit;
            newNumber/=10;
        }
        cout << "reversed number is: " << reversedNumber;
    }
};  
   
int main() {   
    Solution sol;
    int N = 1234500;
    sol.reverseDigits(N);
    return  0;   
}   