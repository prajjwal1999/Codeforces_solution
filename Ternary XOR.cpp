#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
  	ll n;
  	cin>>n;
  	string s;
  	cin>>s;
  	string a,b;
  	a.push_back('1');
  	b.push_back('1');
  	ll count=0;
  	for(ll i=1;i<n;i++)
  	 {
  	 	if(s[i]=='2' and count==0)
  	 	{
  	 		a.push_back('1');
  	 		b.push_back('1');
  	 	
  	 	}
  	 	else if(s[i]=='1' and  count==0)
  	 	{
  	 		a.push_back('1');
  	 		b.push_back('0');
  	 		count++;
  	 	
  	 	}
  	 	else if(count>0)
  	 	{
  	 		a.push_back('0');
  	 		b.push_back(s[i]);
  	 	}
  	 	else{
  	 		a.push_back('0');
  	 		b.push_back('0');
  	 	

  	 	}

  	 }
  	 for(auto i:a)
  	 	cout<<i;
  	 cout<<"\n";
  	 for(auto i:b)
  	 	cout<<i;
  	 cout<<"\n";

  }


    return 0;
}
 
