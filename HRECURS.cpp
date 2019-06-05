/*coderanant*/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define f1(i,a,b) for(i=a;i<b;i++)
#define f2(i,a,b) for(i=a;i>=b;i--)
#define endl '\n'
#define pb push_back
#define gp " "
#define ff first
#define ss second
#define mp make_pair

const int mod=1000000007;
int i,j;
ll temp;
int a[101];
int calc(int n,int z)
{
	if(z==n)
		return 0;
	else
	{
		return a[z]+calc(n,z+1);
	}
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    	freopen("/home/akmittal/Desktop/Competitive Programming/in.txt","r",stdin);
    	freopen("/home/akmittal/Desktop/Competitive Programming/out.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    f1(i,1,t+1)
    {
    	int n;
    	cin>>n;
    	f1(j,0,n)
    	cin>>a[j];
    	cout<<"Case "<<i<<": "<<calc(n,0)<<endl;
    }
    return 0;
}