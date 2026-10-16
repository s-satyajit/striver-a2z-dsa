#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    char arr[n];
    int hash[(int) (('z'-'a')+1)] = {};
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        hash[(int) arr[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }
}