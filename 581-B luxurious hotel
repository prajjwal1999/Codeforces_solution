#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define lh long double
#define f(a,b,i) for(ll i=a;i<b;i++)

int main() {

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   
   ll n;
   cin>>n;
   vector<ll> v;
   for(ll i=0;i<n;i++)
   {
   	ll temp;
   	cin>>temp;
   	v.push_back(temp);
   }
    vector<ll>::iterator ptr=v.begin();
   for(ll i=0;i<v.size()-1;i++)
   {
   
   ll ans=*max_element(ptr, v.end());
   if(ans>v[i])
   cout<<ans-v[i]+1<<" ";
	else
		cout<<"0"<<" ";
   ptr++;
}
cout<<"0";

    return 0;
}


   

    
