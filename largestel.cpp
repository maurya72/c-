#include <bits/stdc++.h>
using namespace std;
  int main(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      int max=a[0];
      for(int i=0;i<n;i++){
        if(a[i]>max){
        max=a[i];}
      }
            cout<<max;
//second largest
for(int i=0;i<n;i++){
        if(a[i]>max){
        max=a[i];
        } }
        int m2=a[0];
for(int i=0;i<n;i++){
    if(a[i]>m2&&a[i]!=max){
        m2=a[i];
}
}
cout<<"Second largest:"<<m2;
  }