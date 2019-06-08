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

int solve(vector<int> a, int cur, int k, int i)
{
    //cout<<cur<<endl;
    if(k==0)
        return cur;
    if(k==a.size()-i)
    {
        return solve(a,cur^a[i],k-1,i+1);
    }
    else
    {
        return max(solve(a,cur^a[i],k-1,i+1),solve(a,cur,k,i+1));
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
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);

        f1(i,0,n)
        cin>>a[i];

        int ans=solve(a,0,k,0);
        cout<<ans<<endl;
    }
    return 0;
}