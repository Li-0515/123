#include<bits/stdc++.h>
using namespace std;
int main(){

    string a,b;
    while(getline(cin,a)&&getline(cin,b)){
        map<char,int>ma;
        map<char,int>ans;
        for(char c:a){
            ma[c]++;
        }
        for(char k:b){
            if(ma[k]>0){
                ans[k]++;
                ma[k]--;
            }
        }
        for(auto i:ans){
            if(i.second>0){
                for(int j=0;j<i.second;j++){
                     cout<<i.first;
                }
            }
        }
        cout<<endl;
    }
}