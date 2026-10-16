#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int maxNum = -10^9;
    // inserting into array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        maxNum = max(arr[i], maxNum);
    }

    // hashing
    int hash[maxNum+1] = {};
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // quering
    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        if(num > maxNum) cout << 0 << endl;
        else cout << hash[num] << endl;
    }
}