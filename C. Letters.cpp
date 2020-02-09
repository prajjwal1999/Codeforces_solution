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
   ll n,m;
   cin>>n>>m;
   ll a[n],b[m];
   for(ll i=0;i<n;i++)
   	cin>>a[i];
   //............
   for(ll i=0;i<m;i++)
   {

   	ll x;
   	cin>>x;
   	ll sum=0;
   	ll idx=0;
   	while(sum+a[idx]<x)
   	{
        sum+=a[idx];
        	idx++;
   	}
   	cout<<idx+1<<" "<<x-sum<<endl;

   }


 return 0;

}
