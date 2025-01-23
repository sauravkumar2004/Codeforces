#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    while(n--){
        int a;
        cin>>a;
        pq.push(a);
    }
    int sereja=0;
    int Dima=0;
    while(!pq.empty()){
        sereja+=pq.top();
        pq.pop();
       Dima+=pq.top();
    }
    
    cout<<sereja<<" "<< Dima;
}