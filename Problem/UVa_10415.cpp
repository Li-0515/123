#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int>finger_press(char note){
    switch(note){
        case 'c': return {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
        case 'd': return {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
        case 'e': return {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
        case 'f': return {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
        case 'g': return {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
        case 'a': return {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
        case 'b': return {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        case 'C': return {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
        case 'D': return {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
        case 'E': return {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
        case 'F': return {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
        case 'G': return {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
        case 'A': return {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
        case 'B': return {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
        default:  return {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    }
}
void solve(){
    string s;
    getline(cin,s);
    vector<int>count(11,0);
    vector<int>prefinger(11,0);
    for(char c:s){
        vector<int>curfinger=finger_press(c);
        for(int j=1;j<=10;j++){
            if(curfinger[j]==1&&prefinger[j]==0){
                count[j]++;
            }
        }
        prefinger=curfinger;
    }
    for(int i=1;i<=10;i++){
        cout<<count[i]<<(i==10?"":" ");
    }
    cout<<"\n";
}
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    string blank;
    getline(cin,blank);
    while(t--){
        solve();
    }
}