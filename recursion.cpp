#include<bits/stdc++.h>
using namespace std;
void rec(int i,int x){
    if(i>x){
        return;
    }
    cout<<"xyz"<<endl;
    i++;
    rec(i,x);
}
int main(){
    int n;
    cin>>n;
    rec(1,n);
}