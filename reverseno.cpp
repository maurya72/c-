#include<iostream>
using namespace std;
int main()
{
    int n;
    int l=0,s=0;
    cin>>n;
   while(n%10!=0){
    s=n%10;
    l=l*10+s;
    n=n/10;
   }
   cout<<l;

}
