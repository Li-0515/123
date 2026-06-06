#include<iostream>
#include<deque>
using namespace std;

int main(){
    int t;
    cin>>t;
    int Case=1;
    while(t--){
        char a,b;
        int n;
        cin>>a>>b>>n;
        long long int field[105][105];
        deque<long long>d;
        bool check =true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>field[i][j];
                d.push_back(field[i][j]);
                if(field[i][j]<0){
                    check=false;
                }
            }
        }
        if(check){
            while(d.size()>0){
                if(d.size()==1){
                    d.pop_front();
                    break;
                }
                if(d.front()==d.back()){
                    d.pop_front();
                    d.pop_back();
                }
                else{
                    check=false;
                    break;
                }
            }
        }
        if(check){
            cout<<"Test #"<<Case++<<": Symmetric."<<endl;
        }
        else{
            cout<<"Test #"<<Case++<<": Non-symmetric."<<endl;
        }
    }
}
