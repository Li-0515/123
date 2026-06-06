#include<iostream>
#include<vector>
#include<algorithm>
using ll=long long;
using namespace std;

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    while(cin>>n>>m){
        bool check=true;
        vector<ll>v;
        if(n%m!=0||n<=1||m<=1){
            cout<<"Boring!"<<endl;
            continue;
        }

        for(ll i=n;i>1;i/=m){
            if(i%m==0){
                v.push_back(i);
            }
            else{
                cout<<"Boring!"<<"\n";
                check=false;
                break;
            }
        }
       if(check){
            for(ll k:v){
                cout<<k<<" ";
            }
            cout<<"1\n";
       }
    }
}