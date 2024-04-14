#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cin>>n;
   for(int i=0;i<n;i++){
    for(int j=n;j>=1;j--){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
   }

}
