#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin>>n>>a;
	vector<int>v(n);
	for(auto &x:v)cin>>x;
	sort(v.begin(),v.end());
	int count=0;
	for(int i=0;i<n;i++){
	    if(v[i]-v[i-1]<=a)count++;
        else count=1;
	}
	cout<<count<<endl;
}
