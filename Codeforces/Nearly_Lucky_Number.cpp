#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int countFAS=0;
    while(n>0){
        if(n%10==4 || n%10==7) countFAS++;
        n=n/10;
    }
    if(countFAS==4 || countFAS==7 ) cout<<"YES";
    else cout<<"NO";
    
}