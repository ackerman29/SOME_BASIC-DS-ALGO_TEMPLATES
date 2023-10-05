#include <iostream>
using namespace std;
bool binarySearch(int a[], int k, int n) {
    int l = 0;
    int h = n - 1;
    
    while (l <= h) {
        int mid = l + (h - l) / 2;
        
        if (k == a[mid]) {
            return true;
        } else if (k < a[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    return false;
}

int main() {
    int n, kn;
    cin >> n >> kn;
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int k[kn];
    
    for (int i = 0; i < kn; i++) {
        cin >> k[i];
    }
    
    for (int i = 0; i < kn; i++) {
        if (binarySearch(a, k[i], n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
