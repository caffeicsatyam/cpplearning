#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int counttheleave(int n,int k){
    int leaveinitheyear=0;
    for( int i=0;i<n;i++){
        if( n+i-1 <k ){
            leaveinitheyear+= pow(i,i);
        }
    }
    return  leaveinitheyear;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int result=counttheleave(n,k);
        if(result%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}