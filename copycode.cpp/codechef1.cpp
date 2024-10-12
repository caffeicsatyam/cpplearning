#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a, b;
        cin >> a >> b;
        if( (a=='R')|| (b=='R') ) {
             cout<<"R"<<endl;
        }else if( (a=='G')&& (b=='G')) {
            cout<<'G'<<endl;
        }else{
            cout<< 'B'<<endl;
        }
    }
    return 0;
}
