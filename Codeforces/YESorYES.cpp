#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s[0]=='y' && s[1]=='e' && s[2]=='s'){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
}