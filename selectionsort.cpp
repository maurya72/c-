#include <bits/stdc++.h>
using namespace std;
  int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=1;i<=n;i++){
          cin>>a[i];
      }
      for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int min=a[i];
            if(a[i]>a[j]){
                min=a[j];
                a[j]=a[i];
                a[i]=min; 
            }
        }}
        for(int i=1;i<=n;i++){
            cout<<a[i];
      }
  }