#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(3);
	    for(auto &x:v)cin>>x;
	    int mn = *std::min_element(v.begin(), v.end());
	    cout<<n-mn<<"\n";
	}
}
