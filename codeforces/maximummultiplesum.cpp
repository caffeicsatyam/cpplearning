#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int max_sum=0;
       int max_x=2;
       for( int x=2;x<=n;x++){
        int sum=0;
        for(int k=1;k*x<=n;k++){
            sum+=k*x;
        }
        if(sum>max_sum){
            max_sum=sum;
            max_x=x;
        }
       }
       cout<<max_x<<endl;
    }
    return 0;
}