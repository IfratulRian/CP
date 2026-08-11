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
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int l = 0, r = v.size();
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] > x)
                r = mid;
            else
                l = mid + 1;
        }
        if (l == v.size())
            v.push_back(x);
        else
            v[l] = x;
    }
    cout << v.size() << '\n';
    return 0;
}