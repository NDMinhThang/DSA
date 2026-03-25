#include <bits/stdc++.h>
using namespace std;

    int main(){
        int n; cin>>n;
        multiset<int> se; // lưa được các phần tử giống nhau

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            se.insert(x);
        }

        int q;
        cin>>q;
      
            while(q--){
                int type, x;
                cin>>type>>x;
                if(type == 1){
                    se.insert(x);
                }
                else if(type==2){
                    auto it = se.find(x);
                    if(it != se.end()){
                        se.erase(it);
                    }   
                }
                else{
                    if(se.find(x) != se.end())
                        cout<<"YES"<<endl;
                    else 
                        cout<<"NO"<<endl;
                }
              
            }
 
    }
