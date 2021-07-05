#include<bits/stdc++.h>
using namespace std;
map<string,bool> memo;

int cnt(string target,string s[],int n,map<string,bool> memo)
{
   

   if(memo[target])
   return memo[target];
  
  
   if(target.length()==0)
   return true;
   
  
   
   for(int i=0;i<n;i++)
   {
      if(target.find(s[i])==0)
     { 
     string p=target;
     
      p.erase(0,s[i].length());

    if(cnt(p,s,n,memo)==true)
    {
    memo[target]=true;
    return true;
    }
   }
   
   }
   memo[target]=false;
   return false;

}
int main()
{
  int n;

  cin>>n;
 string s[n];
 for(int i=0;i<n;i++)
 cin>>s[i];
 
 string t;
 cin>>t;
 
  //for(int i=0;i<n;i++)
 //cout<<s[i]<<" ";
 
 //cout<<t<<endl;
// bool ans=cnt(t,s,n,memo);
// cout<<ans;
 
 (cnt(t,s,n,memo)) ? cout<<"true" : cout<<"false";
// cout<<cnt(t,s,n,memo);

}

