#include<bits/stdc++.h>
using namespace std;
void rec(int x,int i){
    if(i<x){
        return;
    }
    cout<<i<<endl;
    i--;
    rec(1,i);
}
int main(){
    int n;
    cin>>n;
    rec(1,n);
}