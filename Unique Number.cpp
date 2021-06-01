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

int main()
{
    fastio;
    test()
    {
        lli n;
        cin>>n;
        lli a[9]={1,2,3,4,5,6,7,8,9};
        lli l=0,r=8;
        vl v;
        if(n>45)
            cout<<-1<<endl;
        else
        {
            while(n>0)
            {
                if(n>=a[r])
                    {n-=a[r];v.pb(a[r]);r--;}
                else
                    r--;
            }
            sort(v.begin(),v.end());
            for(auto i:v)
                cout<<i;
            cout<<endl;
        }
    }
    return 0;
}
