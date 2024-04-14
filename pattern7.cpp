#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=n;
   while(i>1){
    int j=n;
    while(j>=i){
        cout<<j-i+1;
        j--;
    }
    cout<<endl;
    i--;
   }

}
