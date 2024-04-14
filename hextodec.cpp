#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int btod1(string x){
    int a=0,b=0;
    for(int i=x.size();i>=1;i--){
        if(x[i]<=9&&x[i]>=1){
            b+=x[i]*pow(16,a);
        }
        else if(x[i]<='F'&&x[i]>='A'){
            b+=(x[i]-'A'+10)*(pow(16,a))
            ;
        }
         a++;
    }
return b;
}
int main(){
string n;
cin>>n;
cout<<btod1(n);
}