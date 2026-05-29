#include <bits/stdc++.h>
using namespace std;
string kt(string s)
{
    string tmp="";
    tmp+=s[0];
    for(int i=1;i<s.size();i++)
    {
        char x =((tmp[i-1]-'0')^(s[i]-'0'))+'0';
        tmp+=x;
    }
    return tmp;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<kt(s)<<endl;
    }
}
