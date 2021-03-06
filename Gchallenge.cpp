#include<bits/stdc++.h>
using namespace std;

int MinimumCost (int N, int M, vector<vector<int> > A) {
   // Write your code here

   vector<int> a(M,0);
   for(int i=0;i<M;i++)
   {
     int mn=INT_MAX;
       for(int j=0;j<N;j++)
       {
           if(A[j][i]<mn)
           mn=A[j][i];
       }
      // mn=min(A[i].begin(),A[i].end());
       a[i]=mn;
   }
  int maxi=INT_MIN,mini=INT_MAX;

        for(int j=0;j<M;j++)
       {
          if(a[j]<mini)
          mini=a[j];

          if(a[j]>maxi)
          maxi=a[j];
       }
  
   int cost=maxi-mini;
   
   return cost;
   
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<vector<int> > A(N, vector<int>(M));
        for (int i_A = 0; i_A < N; i_A++)
        {
        	for(int j_A = 0; j_A < M; j_A++)
        	{
        		cin >> A[i_A][j_A];
        	}
        }

        int out_;
        out_ = MinimumCost(N, M, A);
        cout << out_;
        cout << "\n";
    }
}
