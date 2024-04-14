#include<iostream>
using namespace std;
int main()
{
    int n;
    int s=0;
    cin>>n;
    int m=n;
   while(n!=0){
    int l=n%10;
    s+=l*l*l;
    n=n/10;
   }
   if(m==s){
    cout<<"Armstrong";
   }
   else{
    cout<<"not a Armstrong";
   }

}
