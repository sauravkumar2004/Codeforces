#include<iostream>
using namespace std;
int main(){
    string s="codeforces";
    int n;
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES";
        else cout<<"NO";
    }
}