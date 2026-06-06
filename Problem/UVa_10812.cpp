#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        if(s<d){
            cout<<"impossible"<<endl;
        }
        else if((s+d)%2!=0||(s-d)%2!=0){
            cout<<"impossible"<<endl;
        }
        else{
            int x=(s+d)/2;
            int y=(s-d)/2;
            cout<<x<<" "<<y<<endl;
        }
    }
}