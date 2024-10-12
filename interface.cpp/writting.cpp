#include<iostream>
#include<vector>
using namespace std;


void delete_array( int arr[],int size, int index){
    if( index<0 || index>=size){
        cout<<" Deletion Not Possible !" <<endl;
        return ;
    }
    for( int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}

int main(){
    cout<<"Enter size of an array"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter the elements of an array "<<endl;
    vector<int>a(n);
    for( int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter Index you want to delete : "<<endl;
    int i;
    cin>>i;

    delete_array(a.data(),n,i);

    cout<<endl;
    
    return 0;

    
}