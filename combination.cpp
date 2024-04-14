#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    cout<<"Enter n";
    int x;
    cin>>x;
    cout<<"Enter r";
    int r;
    cin>>r;  
    float k=factorial(x)/(factorial(r)*factorial(x-r));
    cout<<k;
}