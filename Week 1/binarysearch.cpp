#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int key;
        cin >> key;
        bool flag = false;
        int end = n - 1, start = 0, cnt = 0;
        while (end >= start) {
            int mid = (end + start) / 2;
            cnt++;
            if (arr[mid] == key) { flag = true; break; }
            if (arr[mid] > key) end = mid - 1;
            else start = mid + 1;
        }
        if (flag) cout << "Present " << cnt;
        else cout << "Not Present";
    }
}
