#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
void sinh() {
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) i--;
    if (i == 0) {
        for (int k = 1; k <= n; k++) cout << k << " ";
    } else {
        int j = n;
        while (a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
        for (int k = 1; k <= n; k++) cout << a[k] << " ";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sinh();
        cout << "endl";
    }
}
