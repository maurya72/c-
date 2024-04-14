#include<iostream>
#include<cmath>
using namespace std;
int btod1(int x){
    int a=0,b=0;
    int i=0;
    while(x>0){
        a=x%10;
        b+=a*(pow(2,i));
        i++;
        x=x/10;
    }
return b;
}
int main(){
int n;
cin>>n;
cout<<btod1(n);
}