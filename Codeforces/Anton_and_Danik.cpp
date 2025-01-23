#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int countA=0;
    int countB=0;
    while(n--){
        char s;
        cin>>s;
        if(s=='A') countA++;
        else countB++;
    }
    if(countA==countB) cout<<"Friendship";
    else if(countA>countB) cout<<"Anton";
    else cout<<"Danik";
}