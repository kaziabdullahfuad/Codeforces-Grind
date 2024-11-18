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
const ll mod=1000000007;
ll factorial(ll n,vector<ll> &dp){

	if(dp[n]!=-1){

		return dp[n]%mod;
	}
	else if(n==0){
		return 1;
	}

	dp[n]=n*factorial(n-1,dp);


	return dp[n]%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    vector<ll> dp(100000+5,-1);

    while(t){

    	ll n;
    	cin>>n;

    	cout<<factorial(n,dp)<<endl;


    	t--;
    }

    return 0;
}