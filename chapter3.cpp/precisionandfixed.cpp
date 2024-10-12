#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	float x,y;
	cin>>x>>y;
	if(static_cast<int>(x)%5==0&&y>=x+0.5){
	    y-= x+0.5 ;
		cout<<fixed<<setprecision(2)<<y<<endl;

	}
	else{
	    cout<<fixed<<setprecision(2)<<y<<endl;
	}
	

}
