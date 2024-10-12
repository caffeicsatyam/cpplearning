#include<iostream>
#include<vector>
using namespace std;

void result(){

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string b;
        cin>>b;
        char temp;

        temp=a[0];
        a[0]=b[0];
        b[0]=temp;
    
       
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}