#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int H=0;
    int E=0;
    int sum=0;
    while(n--){
        int a;
        cin>>a;
        sum+=a;
        if(a==0) E++;
        else H++;
    }
    if(H==0) cout<<"EASY";
    else cout<<"Hard";
}