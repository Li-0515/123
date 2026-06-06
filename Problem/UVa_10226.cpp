#include<iostream>
#include<string>
#include<map>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin>>t;
    string blank;
    getline(cin,blank);
    getline(cin,blank);
    bool check=false;
    while(t--){
        if(check){
            cout<<"\n";
        }
        check=true;
        string s;
        double total=0;
        map<string,int>m;
        while(getline(cin,s)){
            if(s.empty()){
                break;
            }
            m[s]++;
            total++;
        }
        for(auto i:m){
            cout<<i.first<<" "<<fixed<<setprecision(4)<<i.second/total*100<<endl;
        }
    }
}