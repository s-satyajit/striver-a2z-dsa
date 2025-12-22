#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int space = 2*(n-1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // for (int j = 1; j <= 2*(n-i); j++) {
        //     cout << " ";
        // }

        // or it can also be like declaring the space as 2*(n-1) and then decrementing that at every loop

        for (int j = 0; j <= space; j++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << "\n";
        space -= 2;
    }
    return 0;
}