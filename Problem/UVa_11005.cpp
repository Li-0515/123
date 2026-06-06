#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int cost[36];
int compute_cost(int number,int base){
    if(number==0){
        return cost[0];
    }
    int total=0;
    while(number>0){
        int rem=number%base;
        total+=cost[rem];
        number/=base;
    }
    return total;
}
int main(){
    int t;
    int Case=1;
    cin>>t;
    bool blank=false;
    while(t--){
        if(blank){
            cout<<"\n";
        }
        blank=true;
        for(int i=0;i<36;i++){
            cin>>cost[i];
        }
        int Q;
        cin>>Q;
        vector<int>numbers(Q);
        for(int i=0;i<Q;i++){
            cin>>numbers[i];
        }
        cout<<"Case "<<Case++<<":\n";
        for(int i=0;i<Q;i++){
            int num=numbers[i];
            vector<int>bases;
            int min_cost=INT_MAX;
            for(int base=2;base<=36;base++){
                int c=compute_cost(num,base);
                if(c<min_cost){
                    min_cost=c;
                    bases.clear();
                    bases.push_back(base);
                }
                else if(c==min_cost){
                    bases.push_back(base);
                }
            }
            cout<<"Cheapest base(s) for number "<<num<<":";
            for(int b:bases){
                cout<<" "<<b;
            }
            cout<<"\n";
        }
    }
}