#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxa=0;
    int lamaxa=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]) maxa++;
        else{
            lamaxa=max(maxa,lamaxa);
            maxa=0;
        }
    } 
    cout<< max(maxa,lamaxa)+1;
}