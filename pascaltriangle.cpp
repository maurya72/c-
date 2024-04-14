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
    int a;
    cin>>a;
   for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
        float k=factorial(i)/(factorial(j)*factorial(i-j));
        cout<<k;
}
cout<<endl;
    }

    }