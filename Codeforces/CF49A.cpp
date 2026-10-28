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

bool isVowel(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}

void solve()
{
    string s;
    //cin>>s;
    // cin.ignore();
    getline(cin>>ws,s);
    int f=0;
    // if(isVowel(tolower(s[s.size()-2])))yy
    for(int i=s.size()-1;i>=0;i--){
        if(tolower(s[i])>='a' && tolower(s[i])<='z'){
            if(isVowel(tolower(s[i])))yy
            else nn
            f=1;
            break;
        }
    }
    if(!f)nn
}

int main(){
    O_amay_BHaloBashe_Nai();
    int t;
    //cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
