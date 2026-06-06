#include<bits/stdc++.h>
using namespace std;

int todecimal(string s){
    int res=0;
    for(int i=0;i<s.size();i++){
        res=(res<<1)+(s[i]-'0');
    }
    return res;
}

int gcd(int a,int b){
    while(b!=0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    int n;
        cin>>n;
        int Pair=1;
        for(int i=0;i<n;i++){
            string a,b;
            cin>>a>>b;
            cout<<"Pair #"<<Pair++<<": ";
            if(gcd(todecimal(a),todecimal(b))>1){
                cout<<"All you need is love!"<<endl;
            }
            else{
                cout<<"Love is not all you need!"<<endl;
            }
        }
    }