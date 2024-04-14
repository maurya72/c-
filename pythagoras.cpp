#include<iostream>
using namespace std;
void test(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=max(a,max(b,c));
    if(d*d*2==a*a+b*b+c*c){
        cout<<"Pythagoras Triplet";
    }
    else{
        cout<<"Not a pythagoras triplet";
    }
}
int main(){
    test();

}