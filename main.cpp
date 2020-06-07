#include<bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
void c_p_c()
{
 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
   #endif
}
int main()
{
	c_p_c();
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n],b[n];
		map<int,int>mp;
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++){
			cin>>b[i];
			mp[b[i]]++;
		}std::vector<int> v;
		int xv=0;int flag=0;
		for(int i=0;i<n;i++)
			xv=xv^a[i];
		for(int i=0;i<n;i++)
			xv=xv^b[i];
		for(int i=0;i<n;i++)
		{
			int val=a[i]^xv;
			if(mp[val]>0)
			{
				mp[val]--;
				v.push_back(val);
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"-1"<<endl;
		else
		{
			for(auto i:v)
				cout<<i<<" ";
			cout<<endl;
		}





	}
			return 0;
		
		}
		


		
	

   

