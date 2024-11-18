#include<iostream>
#include<numeric>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
const int mod=10000007;
int hexabonacci(int n,vector<int> &dp){

	if(dp[n]!=-1){
		return dp[n]%mod;
	}

	
	dp[n]=(hexabonacci(n-1,dp)%mod+hexabonacci(n-2,dp)%mod
	+hexabonacci(n-3,dp)%mod+hexabonacci(n-4,dp)%mod+hexabonacci(n-5,dp)%mod
	+hexabonacci(n-6,dp)%mod)%mod;

	return dp[n]%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    int start=1;
    while(t){

    	int a,b,c,d,e,f,n;
    	cin>>a>>b>>c>>d>>e>>f>>n;

    	vector<int> dp(n+5,-1);

    	dp[0]=a;
    	dp[1]=b;
    	dp[2]=c;
    	dp[3]=d;
    	dp[4]=e;
    	dp[5]=f;

    	cout<<"Case "<<start<<": "<<hexabonacci(n,dp)<<endl;

    	start++;
    	//printVector(dp);	

    	t--;
    }

    return 0;
}