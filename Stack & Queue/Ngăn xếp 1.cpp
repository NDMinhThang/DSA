#include<bits/stdc++.h>

using namespace std;

	int main(){
			stack<int> st;

			string s;
			while(getline(cin,s)){

				stringstream ss(s);
				string check;

				ss >> check;

				if(check == "push"){
					int x;
					ss >> x;
					st.push(x);
				}

				else if(check == "pop"){
					if(!st.empty()) st.pop();

				}

				else if(check == "show"){
					if(st.empty()){
						cout<<"empty"<<endl;
					}
					else{

						stack<int> tmp = st;
						stack<int> res;

						while(!tmp.empty()){
							res.push(tmp.top());
							tmp.pop();
						}

						while(!res.empty()){
							cout<<res.top()<<" ";
							res.pop();
						}
						cout<<endl;

					}

				}
			}		
	}
