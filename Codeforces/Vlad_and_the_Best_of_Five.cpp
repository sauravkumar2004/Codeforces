#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto x: s) mp[x]++;
    for(auto x:mp){
        if(x.second>2) cout<<x.first<<endl;
    }
        
    }
}