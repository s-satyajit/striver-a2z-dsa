#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // for (int i = n; i > 0; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // or it can also be like
    
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}