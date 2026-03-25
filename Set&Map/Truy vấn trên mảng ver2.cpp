#include <bits/stdc++.h>
using namespace std;

  int main(){
      map<int,int> mp;
      int n;
      cin >> n;
      for(int i = 0; i < n; i++){
              int m;
              cin>>m;
              mp[m]++;
      }

    int q;
    cin>>q;
    while(q--){
        int type, x;
        cin>>type>>x;
        if(type == 1){
            mp[x]++;
        }
        else if(type == 2){
            if(mp[x]>0) mp[x]--;
        }
        else{
            if(mp[x] > 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

}

