#include<iostream>
#include<vector>

using namespace std;

int counthegold( vector<int>a,int size,int k){
        int gold=0;
        int givengold=0;
        for( int ai : a){
            if( ai>=k){
                gold+=ai;
            }else if(ai==0&& gold>0){
                gold--;
                givengold++;
            }
        }
        return givengold;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        for( size_t i=0;i<n;i++){
            cin>>a[i];
        }

        int result=counthegold( a,n,k);
        cout<<result<<endl;
    }
    return 0;
}