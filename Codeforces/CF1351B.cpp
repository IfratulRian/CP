//Cristiano is the GOAT
#include<bits/stdc++.h>
using namespace std;
#define O_amay_BHaloBashe_Nai() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
#define MOD 998244353
#define in insert 
// string yy = "YES";
// string nn = "NO";
#define yy cout<<"Yes"<<endl;
#define nn cout<<"No"<<endl;
 
const int MAXA = 1e6 + 5;
int prime[MAXA];
 
void sieve(){
    for(int i=1;i<MAXA;i++) prime[i]=i;
    prime[0]=0;
    prime[1]=1;
    for(int i=2;i*i<MAXA;i++){
        if(prime[i]==i){
            for(int j=i*i;j<MAXA;j+=i){
                if(prime[j]==j) prime[j]=i;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int ans[n];
    int t=n;
    int p=0;
    while(t--)
    {
        vector <int> vec(4);
        for(int i=0;i<4;i++)
        {
            cin>>vec[i];
        }
        int x = vec[0]*vec[1] + vec[2]*vec[3];
        int y=0;
        sort(all(vec));
        for(int j=3;j>=0;j--)
        {
            if(vec[j]==vec[j-1]){
                y = vec[j]*vec[j]; 
                break;
            }
        }
        if(y==x)ans[p]=1;
        else ans[p]=0;
        p++;
    }
    for(int w=0;w<n;w++)
    {
        if(ans[w]==1)yy
        else nn
    }
}
