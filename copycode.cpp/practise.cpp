#include<iostream>
#include<vector>


using namespace std;

void subarray( int a[],int size){
    
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        //assigning array
        vector<int>arr(n);
        for( int i=0 ;i<n;++i){
            cin>>arr[i];
        }
        
        subarray( arr.data(),n);
        
        return 0;
        
    }


}
