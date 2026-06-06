#include<iostream>
using ll=long long;
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll s,d;
    while(cin>>s>>d){
        while(d>0){
            d-=s;
            s++;
        }
        cout<<s-1<<endl;
    }
}