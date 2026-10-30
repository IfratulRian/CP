#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        bool f=false;
        for(int i=0;i<n-3;i++){
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2'&& s[i+3]=='5')count++;
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2'&& s[i+3]=='6')f=true;
        }
        if(f)cout<<0;
        else if(count>0)cout<<1;
        else if(count==0)cout<<0;
        cout<<endl;
    }
}
