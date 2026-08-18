#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main()
{
    fast();
    ll w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    cout<<2*(w1+h1+h2)+4<<endl;
}