#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    map<int,int>freq;
	    int mx=INT_MIN;
	    for(auto &x:v){
	        cin>>x;
	        freq[x]++;
	       // if(freq[x].second>mx){
	       //     mx=freq[x].second;
	       // }
	    }
	    for(auto x:freq){
	        if(x.second>mx){
	            mx=x.second;
	        }
	    }
	    cout<<mx<<"\n";
	}
}
