#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast()                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main(){
    fast();
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(((2 * a) + b) > ((2 * x) + y))
        cout << "Messi" << endl;
    else if(((2 * a) + b) == ((2 * x) + y))
        cout << "Equal" << endl;
    else
        cout << "Ronaldo" << endl;
}