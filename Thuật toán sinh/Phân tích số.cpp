#include <bits/stdc++.h>
using namespace std;

int n, a[1005], ok, cnt;

        void ktao() {
            cnt = 1;
            a[1] = n;
        }

        void next() {
            int i = cnt;

            while (i >= 1 && a[i] == 1) {
                i--;
            }
            
            if (i == 0) {
                ok = 0;
            } else {

                int d = cnt - i + 1; 
                a[i]--; 
                cnt = i; 
                 
                int q = d / a[i]; 
                int r = d % a[i];
                
                if (q) {
                    for (int j = 1; j <= q; j++) {
                        a[++cnt] = a[i]; 
                    }
                }
                if (r) {
                    a[++cnt] = r; 
                }
            }
        }

        int main() {    
            int t; 
            if (cin >> t) {
                while (t--) {
                    cin >> n;
                    ok = 1;
                    ktao();
                    
                    while (ok) {
                        cout << "(";
                        for (int i = 1; i <= cnt; ++i) {
                            cout << a[i];
                            if (i == cnt) cout << ") ";
                            else cout << " ";
                        }
                        next();
                    }
                    cout << "\n";
                }
            }
        }
