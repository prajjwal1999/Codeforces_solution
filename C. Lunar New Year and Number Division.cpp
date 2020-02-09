#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ph push_back
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
  	cin>>a[i];
  ll ans=0;
  sort(a,a+n);
  for(ll i=0;i<n/2;i++)
  {
  	ans= ans + (a[i]+a[n-i-1])*(a[i]+a[n-i-1]);

  }
  cout<<ans;
 return 0;

}
