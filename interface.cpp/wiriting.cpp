#include<iostream>
#include<vector>

using namespace std;


void reverse_array(int arr[], int size){
    for( int i=0;i<size/2;++i){
        int temp= arr[i];
        arr[i]=arr[size-i-1];
        arr[size -1-i]=temp;
    }
}

int main(){
    int n;
    cout<< " Enter size of array "<<endl;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }

    reverse_array(a.data(),n);
    
    cout<<"Reversed array is : "<<endl;

    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    #if defined(__GNUC__)
    // Code compiled with GCC
    #elif defined(__clang__)
    // Code compiled with Clang
    #else
    // Unknown compiler
    #endif


    return 0;
}