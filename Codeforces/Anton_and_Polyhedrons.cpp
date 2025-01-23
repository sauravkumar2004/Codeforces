#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string t="Tetrahedron";
    string c="Cube";
    string o="Octahedron";
    string d="Dodecahedron";
    string i="Icosahedron";
    int sum=0;
    while(n--){
        string s;
        cin>>s;
        if(s==t) sum+=4;
        else if(s==c) sum+=6;
        else if(s==o) sum+=8;
        else if(s==d) sum+=12;
        else sum+=20;
    }
    cout<<sum;
}