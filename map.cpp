#include <bits/stdc++.h>
using namespace std;
  int main(){
      int n;
      cin>>n;
      int a[n];
      map<int,int>mpp;
      for(int i=1;i<=n;i++){
          cin>>a[i];
          mpp[a[i]]++;
      }
      int q;
      cin>>q;
      int x[q];
      for (int i = 1; i <= q; i++) {
          int x;
          cin>>x;
          cout<<"-->"<<mpp[x];
       }
  }