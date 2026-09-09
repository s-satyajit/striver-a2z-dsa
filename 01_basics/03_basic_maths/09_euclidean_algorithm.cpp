#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int findGcd(int n1,int n2) {
        while(n1>0 && n2>0) {
            if(n1>n2) n1=n1%n2;
            else n2=n2%n1;
        }
        if(n1==0) return n2;
        else return n1;
    }
};

int main() {
    Solution sol;
    int N1 = 5;
    int N2 = 15;
    cout << sol.findGcd(N1, N2);
    return 0;
}