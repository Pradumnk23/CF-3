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
        lli s0=0,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,ans=0;
        string s;
        while(n--)
        {
            cin>>s;
            if(s[0]=='1')
                {s0++;ans=max(ans,s0);}
            if(s[1]=='1')
                {s1++;ans=max(ans,s1);}
            if(s[2]=='1')
                {s2++;ans=max(ans,s2);}
            if(s[3]=='1')
                {s3++;ans=max(ans,s3);}
            if(s[4]=='1')
                {s4++;ans=max(ans,s4);}
            if(s[5]=='1')
                {s5++;ans=max(ans,s5);}
            if(s[6]=='1')
                {s6++;ans=max(ans,s6);}
        }
        cout<<ans<<endl;
    return 0;
}
