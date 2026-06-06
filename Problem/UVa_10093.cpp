#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using ll=long long;
using namespace std;

int chartodecimal(char c){
    if(c>='0'&&c<='9'){
        return c-'0';
    }
    if(c>='A'&&c<='Z'){
        return c-'A'+10;
    }
    if(c>='a'&&c<='z'){
        return c-'a'+36;
    }
    return -1;
}
void solve(){
    string s;
    while(cin>>s){
        ll sum=0;
        int max_val=0;
        for(char c:s){
            int val=chartodecimal(c);
            if(val!=-1){
                sum+=val;
                if(val>max_val){
                    max_val=val;
                }
            }
        }
        int start_r=max(2,max_val+1);
        bool check=false;
        for(int R=start_r;R<=62;R++){
            if(sum%(R-1)==0){
                cout<<R<<"\n";
                check=true;
                break;
            }
        }
        if(!check){
            cout<<"such number is impossible!\n";
        }
    }
}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    solve();
}