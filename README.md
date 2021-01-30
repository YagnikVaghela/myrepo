# myrepo
justexploring
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t,j;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        char p[n];
        ll s[n];
        for(i=1;i<=n-1;i++)
        {
            cin>>p[i];
            s[i]=i;
        }
        s[i]=i;
        j=n;
         for(int i=1;i<=n-1;i++)
        cout<<p[i]<<" ";
        
        for(int i=1;i<=n;i++)
        {
            if(p[i]=='<')
            {
               s[i]=i;
              
            }
             if(p[i]=='>')
            {
               
                s[i]=s[j];   
                j--;
            }
            if(i==n && p[i-1]=='<')
            {
                s[n]=s[n-1]+1;
            }
            if(i==n && p[i-1]=='>')
            {
                cout<<"-------" <<s[i-1]<<"----";
                s[n]=s[n-1]-1;
            }
        }
        cout<<"\nresult\n";
             
       for(int i=1;i<=n;i++)
       cout<<s[i]<<" ";
       
      
            
    }
    return 0;
}
