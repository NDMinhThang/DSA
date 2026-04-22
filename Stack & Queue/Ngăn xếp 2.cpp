#include<bits/stdc++.h>
using namespace std;

	int main(){
      int t; cin>>t;
      cin.ignore();
			stack<int> st;
			while(t--){
        string s;
				getline(cin,s);
				stringstream ss(s);
				string check;

				ss >> check;

				if(check == "PUSH"){
					int x;
					ss >> x;
					st.push(x);
				}

				else if(check == "POP"){
					if(!st.empty()) st.pop();

				}

				else if(check == "PRINT"){
					if(st.empty()){
						cout<<"NONE"<<endl;
					}
					else{

						if(!st.empty()){
							cout<<st.top();
						}
						cout<<endl;

					}

				}

			}			
	}
