#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int n) {

    for(int i = 0; i < n; i++) {

        // Nếu là nút rỗng
        if(a[i] == -1) {

            int l = 2 * i + 1;
            int r = 2 * i + 2;

            // Không được tồn tại con của nút rỗng
            if((l < n && a[l] != -1) ||
               (r < n && a[r] != -1))
                return false;

            continue;
        }

        int l = 2 * i + 1;
        int r = 2 * i + 2;

        bool left  = (l < n && a[l] != -1);
        bool right = (r < n && a[r] != -1);

        // Chỉ có đúng 1 con
        if(left != right)
            return false;
    }

    return true;
}

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << (check(a, n) ? "YES" : "NO");

}
