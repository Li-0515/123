#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
using namespace std;

struct cryana{
    char alpha;
    int count;
};

bool cmp(cryana a,cryana b){
    if(a.count!=b.count){
        return a.count>b.count;
    }
    return a.alpha<b.alpha;
}

int main(){
    cryana list[26];
    for(int i=0;i<26;i++){
        list[i].alpha=(char)('A'+i);
        list[i].count=0;
    }
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        for(char c:s){
            if(isalpha(c)){
                c=toupper(c);
                list[c-'A'].count++;
            }
        }
    }
    sort(list,list+26,cmp);
    for(int i=0;i<26;i++){
        if(list[i].count>0){
            cout<<list[i].alpha<<" "<<list[i].count<<"\n";
        }
    }
}