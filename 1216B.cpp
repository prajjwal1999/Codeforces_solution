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
  vector<pair<ll,ll>> v;
  for(ll i=0;i<n;i++)
  {
  	ll temp;
  	cin>>temp;
  	v.push_back(make_pair(temp,i+1));
  }
  sort(v.begin(), v.end(), sortinrev);
  ll sum=0,j=0;
  for(auto i:v)
  {
  	 sum+= (i.first*j)+1;
  	 j++;
   }
    cout<<sum<<endl;
    for(auto i:v)
    	cout<<i.second<<" ";
 return 0;

}
