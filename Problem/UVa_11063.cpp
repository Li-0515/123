#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=0;
	int Case = 1;
	while (cin >> n) {
		vector<int>v(n);
        bool isb2=true;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
            if(v[i]<1){
                isb2=false;
            }
            if(i>0&&v[i]<=v[i-1]){
                isb2=false;
            }
		}
        if(isb2){
            set<int>re;
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    int va=v[i]+v[j];
                    if(re.count(va)){
                        isb2=false;
                        break;
                    }
                    re.insert(va);
                }
                if(!isb2){
                    break;
                }
            }
        }
        if(isb2){
            cout<<"Case "<<"#"<<Case++<<": It is a B2-Sequence."<<endl;
        }
        else{
            cout<<"Case "<<"#"<<Case++<<": It is not a B2-Sequence."<<endl;
        }
        cout<<endl;
    }
}