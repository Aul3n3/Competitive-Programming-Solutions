#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int t;
  cin>>t;
    int x;
  while (t--)
  {
    string v;
    cin.ignore();
     getline (cin,v);
     int n=(v.size()-1); 
     int max=0;
     for (int i=0;i<v.size();i++)
     cout<<v[i]<<" ";
     cout<<endl;
       for (int i=0;i<v.size();i++)
       {
        if (v[i]>max&&v[i]!=n)
        max=v[i];
       }
       cout<<max<<endl;
  }
  
  
  return 0;
}