#include <bits/stdc++.h>
using namespace std;

int getFrequency(int arr[], int n, int num) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << getFrequency(arr, n, num) << endl;
    }
}