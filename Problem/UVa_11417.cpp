#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
    int N;
    while(cin>>N&&N!=0){
        int sum=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                sum += __gcd(i,j);
            }
        }
        cout<<sum<<"\n";
    }
}