#include <bits/stdc++.h>
using namespace std;
  int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j+1]<a[j]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }}
        for(int i=0;i<n;i++){
            cout<<a[i];
      }
  }