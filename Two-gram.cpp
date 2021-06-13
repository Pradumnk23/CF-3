#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<algorithm>
#include <vector>
#include <string>
using namespace std;

#define mp                  make_pair
#define pb                  push_back
#define lli                 long long int
#define sl                  set<lli>
#define pl                  pair<lli,lli>
#define pi                  pair<int,int>
#define ml                  map<<lli,lli>
#define vl                  vector<lli>
#define fastio              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define bits(x)             __builtin_popcountll(x)
#define lld                  long double
#define all(x)              x.begin(),x.end()
#define fn                  for(lli i=0;i<n;i++)
#define rep(i,a,b)          for(lli i=a;i<b;i++)
#define repo(i,a,b)         for(lli i=a;i>=b;i--)
#define test()              lli test; cin>>test; while(test--)
#define fi                  first
#define se                  second
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define sp(x)               fixed << setprecision(x)
#define mod                 1000000007

bool palindrome(string s)
{
    lli n=s.length();
    lli l=0, h=n-1;
    while(l<h)
    {
        if(s[l]!=s[h])
            return false;
        l++;
        h--;
    }
    return true;
}
int main()
{
    fastio;
        lli n;
        cin>>n;
        string s;
        cin>>s;
        lli res=0;
        string curr,ans;
        map<string,lli>m;
        for(lli i=0; i<n-1; i++)
        {
            curr=s[i];
            curr+=s[i+1];
            m[curr]++;
            if(m[curr]>res)
            {
                res=m[curr];
                ans=curr;
            }
        }
        cout<<ans<<endl;
    return 0;
}
