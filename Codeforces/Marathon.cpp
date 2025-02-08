#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int x=3;
        int count=0;
        while(x--){
            int b;
            cin>>b;
            if(a<b) count++;
        }
        cout<<count<<endl;
    }
    
}