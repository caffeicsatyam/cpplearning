#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,count=0;
    vector<int>b(1000001,0);
        cin>>n;
        for( int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==1){
                cin>>x;
                b[x]++;
                if( b[x]==1){
                    count++;
                }
            }else if(a==2){
                cin>>x;
                if(b[x]>0){
                    b[x]--;
                    if(b[x]==0){
                        count--;
                    }
                }
            }else if( a==3){
                cout<<count<<endl;
            }
        }
    return 0;
}