#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &x:v)cin>>x;
	sort(v.begin(),v.end());
// 	int mn = INT_MAX;
// 	for(int i=0;i<n-1;i++){
// 	    if(v[i+1]-v[i]>1){
// 	        mn = min(mn,v[i+1]-v[i]);
// 	    }
// 	}
// 	if(mn == INT_MAX)cout<<0<<endl;
// 	else cout<<mn<<endl;
    cout<<v[n-1]-v[0]-n+1<<endl;
}
