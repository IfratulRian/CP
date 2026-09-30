#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    int Z=0;
	    for(auto &x:v){
	        cin>>x;
	        if(x==0)Z++;
	    }
	    int f=0;;
	    for(int i=0;i<n-1;i++){
	        if(v[i]==0 && v[i+1]==0)f=1;
	    }
	    if(Z==0 || f){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
}
