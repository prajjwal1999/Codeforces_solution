// Fuck Ratings, I'm in Love with Experience. 
//-prajjwal singh
    #include <bits/stdc++.h>
using namespace std;
#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")
#define endl "\n"
#define ll long  long int
#define vec(x) vector<x>
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define matrix(x) vector<vector<x>>
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a, b, sizeof a)
#define setBits(n) __builtin_popcountll(n)
#define prec(n) fixed<<setprecision(n)
#define ff first
#define ss second
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
}


int32_t main()
{
	
	c_p_c();

   int t;cin>>t;
   while(t--)
   {
   		string s;cin>>s;
   		int s0=0,s1=0;
   		for(auto &it:s)
   		{
   			if(it=='0')
   				s0++;
   			else
   				s1++;
   		}
   		int ans=min(s0,s1);
   		int pre0=0,pre1=0;
   		for(auto &it:s)
   		{
   			if(it=='0')
   			{
   				pre0++;
   				s0--;
   			}
   			else{
   				pre1++;
   				s1--;
   			}
   			ans=min(ans,s0+pre1);
   			ans=min(ans,pre0+s1);

   		}
   		cout<<ans<<endl;
   }



	return 0;
}