/*
██████╗     ██╗     █████╗     ███╗   ██╗
██╔══██╗    ██║    ██╔══██╗    ████╗  ██║
██████╔╝    ██║    ███████║    ██╔██╗ ██║
██╔══██╗    ██║    ██╔══██║    ██║╚██╗██║
██║  ██║    ██║    ██║  ██║    ██║ ╚████║
╚═╝  ╚═╝    ╚═╝    ╚═╝  ╚═╝    ╚═╝  ╚═══╝
*/

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
#define yy cout<<"YES"<<endl;
#define nn cout<<"NO"<<endl;

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

// Modulo operations
int mod_add(int a, int b) { 
    return (a + b) % MOD; 
}

int mod_sub(int a, int b) { 
    return (a - b + MOD) % MOD; 
}

int mod_mul(int a, int b){
    return (a * b) % MOD; 
}

int mod_pow(int a, int b){
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = mod_mul(res, a);
        a = mod_mul(a, a);
        b >>= 1;
    }
    return res;
}
int mod_inv(int a) {
    return mod_pow(a, MOD - 2);
}

ll factorial(int number){
    ll fact=1;
    for(int i=2;i<=number;i++){
        fact=(fact*i)%MOD;
    }
    return fact;
}

ll modpow(ll a,ll b,ll mod){
    ll result=1;
    ll A=a%mod;
    while(b>0){
        if(b&1) result=(result*A)%mod;
        A=(A*A)%mod;
        b>>=1;
    }
    return (ll)result;
}

int divisors[MAX];

void precomputeDivisors(){
    for(int i=1;i<MAX;i++){
        for(int j=i;j<MAX;j+=i){
            divisors[j]++;
        }
    }
}

ll countDigit(ll n){
    ll sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

ll AA(ll n){
    return (n%MOD+MOD)%MOD;
}

ll binpow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1) res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

ll Divisors(ll n){
    ll count=1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ll power=0;
            while(n%i==0){
                n/=i;
                power++;
                if(power>3)return 0;
            }
            count*=(power+1);
        }
    }
    if(n>1)count*=2;
    return count;
}

pair<ll,ll> B(ll a,ll b){
    ll s=0;
    ll ans=a;
    for(ll i=a;i<=b;i++){
        ll h=Divisors(i);
        if(h>s){
            s=h;
            ans=i;
        }
    }
    return {ans,s};
}

ll div(ll n){
    ll sum=0;
    for(ll i=1;i<=n;i++){
            for(ll j=1;j*j<=i;j++){
                if(i%j==0){
                    sum+=j;
                    if((i/j)!=j)sum+=(i/j);
                }
            }
    }
    return sum;
}

ll k=10e9+7;

int root(int x)
{
    while(x % 2 == 0)
        x /= 2;
    return x;
}

int binarySearch(vector<int>&v,int target){
    int l=0,r=v.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==target)return mid;
        if(v[mid]<target)l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return a/__gcd(a,b)*b;
}

// void bfs(int start){
//     queue<int>q;
//     q.push(start);
//     vis[start]=true;

//     while(!q.empty()){
//         int node=q.front();
//         q.pop();

//         for(auto child:adj[node]){
//             if(!vis[child]){
//                 vis[child]=true;
//                 q.push(child);
//             }
//         }
//     }
// }

// void dfs(int node){
//     vis[node]=true;

//     for(auto child:adj[node]){
//         if(!vis[child])
//             dfs(child);
//     }
// }

//DSUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU
// int Find(int x){
//     if(parent[x]==x) return x;
//     return parent[x]=Find(parent[x]);
// }

// void Union(int a,int b){
//     a=Find(a);
//     b=Find(b);

//     if(a!=b)
//         parent[b]=a;
// }

vector<vector<int>> subsets(vector<int>& nums) {
    int n=nums.size();
    vector<vector<int>>res;
    for(int i=0;i<(1<<n);i++){
        vector<int>subs;
        for(int j=0;j<n;j++){
            if(i&1<<j){
                subs.push_back(nums[j]);
            }
        }
        res.push_back(subs);
    }
    return res;
}

struct Edge{
    int v;
    ll w;
    bool train;
};

const ll INF = 4e18;

vector<Edge> graph[200005];
vector<ll> dist(200005);
vector<bool> usedTrain(200005,false);

void dijkstra(int source)
{
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    fill(all(dist),INF);
    fill(all(usedTrain),false);
    dist[source]=0;
    pq.push({0,source});
    while(!pq.empty())
    {
        auto [cost,u]=pq.top();
        pq.pop();
        if(cost>dist[u]) continue;
        for(auto child:graph[u])
        {
            int v=child.v;
            ll w=child.w;
            bool isTrain=child.train;
            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                usedTrain[v]=isTrain;
                pq.push({dist[v],v});
            }
            else if(dist[u]+w==dist[v])
            {
                if(usedTrain[v] && !isTrain)
                {
                    usedTrain[v]=false;
                }
            }
            
        }
    }
}

void solve()
{
    ll n,p;
    cin>>n>>p;
    string s;
    cin>>s;
    if(p==1 || p==n){ 
        cout<<1<<endl; 
        return;
    }
    ll ans=1;
    ll r=-1,q=-1;
    for(int i=p-1;i>=0;i--) {
        if(s[i]=='#'){ 
            r=i; 
            break; 
        }
    }
    for(int i=p;i<n;i++) {
        if(s[i]=='#'){ 
            q=i; 
            break;
        }
    }
    if(r==-1 && q==-1)ans=1;
    else if(q>-1 && r>-1){
        ll ans1,ans2; 
        ans1 = min(n-p,r+1)+1;   //l
        ans2 = min(p,n-q+1);  //r
        ans=max(ans1,ans2);
    }
    else if(q>-1){ 
        ans=min(p,n-q+1);
    }
    else if(r>-1){ 
        ans=min(r+1,n-p)+1;
    }
    cout<<ans<<endl;
}

ll josephus(ll n,ll k){
    if(n==1)return 1;
    ll first=n/2;
    if(k<=first)return 2*k;
    k-=first;
    ll x=josephus((n+1)/2,k);
    if(2*x-1<=n)return 2*x-1;
    return 2*x-1-n;
}

bool isVowel(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(){
    O_amay_BHaloBashe_Nai();
    int t;
    cin>>t;
    //t=1;
    while(t--) {
        solve();
    }
    return 0;
}
