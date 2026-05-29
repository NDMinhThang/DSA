#include <bits/stdc++.h>
using namespace std;

string Sinh(string s) {
    // Nếu hàm next_permutation trả về true, xâu s đã tự động được đổi sang cấu hình kế tiếp
    if (next_permutation(s.begin(), s.end())) {
        return s;
    }
    // Nếu không thể sinh thêm (xâu đã giảm dần hoàn toàn), trả về "BIGGEST"
    return "BIGGEST";
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int a;
            string s;
            cin >> a >> s;
            cout << a << " " << Sinh(s) << endl;
        }
    }
}
