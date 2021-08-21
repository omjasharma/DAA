#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int key;
        bool flag = false;
        cin >> key;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                cout << key << "-" << mp[arr[i]];
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "Not Present";
        }
    }
}
