#include <bits/stdc++.h>
using namespace std;


    int main(){
        int n;
        cin>>n;
        cin.ignore();

        for(int i = 1; i<=n; i++){
            string s, num;
            getline(cin, s);
            stringstream ss(s);

            while(ss >> num){
                if(stoi(num)>i){
                    cout<<i<<" "<<num<<endl; // stoi chuyển chuỗi thành số
                }
            }
        }
    }

