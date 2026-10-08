#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    map<int,int>freq;
	    for(auto &x:v){
	        cin>>x;
	        freq[x]++;
	    }
	    int sum=0;
	    for(auto x:freq){
	        if(x.second < x.first)sum+=x.second;
	        else if(x.second > x.first)sum+=x.second-x.first;
	    }
	    cout<<sum<<"\n";
	}
}
