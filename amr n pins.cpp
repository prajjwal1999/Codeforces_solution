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

 	vector<int>v[11];std::vector<int> v1;
 	v[0].push_back(1);
 	v[1].push_back(1);
 	v[2].push_back(2);
 	v[3].push_back(3);
 	v[4].push_back(3);v[4].push_back(2);v[4].push_back(2);
 	v[5].push_back(5);
 	v[6].push_back(5);v[6].push_back(3);
 	v[7].push_back(7);
 	v[8].push_back(7);v[8].push_back(2);v[8].push_back(2);v[8].push_back(2);
 	v[9].push_back(7);v[9].push_back(3);v[9].push_back(3);v[9].push_back(2);
 	int n;cin>>n;
 	string a;cin>>a;
 	sort(a.begin(),a.end());

 
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]!='0'&&a[i]!='1')
 		{
 			for(auto i:v[a[i]-'0'])
 				v1.push_back(i);
 		}
 	}
 	sort(v1.begin(), v1.end(),greater<int>());
 	for(auto i:v1)
 		cout<<i;



	return 0;
}