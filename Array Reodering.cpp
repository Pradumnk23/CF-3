#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,cnt=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(__gcd(a[i],2*a[j])>1)
			cnt++;
			else if(__gcd(a[j],2*a[i])>1)
			cnt++;
		}
	}
	cout<<cnt<<endl;
	}
}
