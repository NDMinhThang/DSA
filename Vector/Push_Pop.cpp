#include<bits/stdc++.h>
using ll = long long;
using namespace std;
	int main(){
		int n; cin>>n;
		vector<int> v;
		for(int i = 0; i<n; i++){
			int m;
			cin>>m;
			if(m==1){
				int a;
				cin>>a;
				v.push_back(a);
			} 
			if(m==2 && !v.empty()) v.pop_back();		
		}
		if(v.empty()) cout<<"EMTRY"<<endl;
		else
			for(int x:v){
			cout<<x<<" ";
		}

	}
