#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
   int n;
   cin>>n;
   vector<string>v;
   int tong=1<<n;//bằng 2^n;
   for(int i=0;i<tong;i++)
   {
       int gray=i^(i>>1);//công thức mã gray (^ này là XOR)
       string tmp="";
       for(int j=n-1;j>=0;j--)
       {
           if(gray&(1<<j)) tmp+='1';
           else tmp+='0';
       }
       v.push_back(tmp);
   }
   for(auto x : v)
   {
       cout<<x<<" ";
   }
   cout<<endl;
    }

}
