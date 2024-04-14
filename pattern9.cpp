#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int a=65;
   while(i<=n){
    int j=1;
    while(j<=n){
        char ch=65+i-1;

        cout<<ch;
        j++;
    }
    cout<<endl;
    i++;
   }

}
