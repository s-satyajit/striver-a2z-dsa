#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        // space
        for (int j = 0; j <= n-i; j++) {
            cout << " ";
        }

        // characters
        char ch = 'A' + i;
        int breakpoint = (2*i+1)/2;
        for (int j = 1; j <= 2*i+1; j++) {
            cout << ch;
            if (breakpoint >= j) ch--;
            else ch++;
        }

        // space
        for (int j = 0; j <= n-i; j++) {
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}