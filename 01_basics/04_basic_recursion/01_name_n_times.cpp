#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void printName(int N, int count, string name) {
        if(count>=N) return;
        cout << count << " : " << name << "\n";
        printName(N, count+1, name);
    }
};

int main() {
    Solution sol;
    int N = 5;
    string name = "satyajit";
    sol.printName(N, 0, name);
    return 0;
}