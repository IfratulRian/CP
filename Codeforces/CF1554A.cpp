#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long>v(n);
	    for(auto &x:v)cin>>x;
	    vector<long long>ans;
	    for(int i=0;i<n-1;i++){
	        ans.push_back(v[i]*v[i+1]);
	    }
	    cout<<*max_element(ans.begin(),ans.end())<<"\n";
	}
}
