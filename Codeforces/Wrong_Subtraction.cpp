#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    while(k--){
        if(n%10!=0) n=n-1;
        else n=n/10;
    }
    cout<<n;
}