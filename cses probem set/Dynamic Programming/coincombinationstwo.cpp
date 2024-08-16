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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin>>n>>x;
    vector<ll> v1(n);
    
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    const int mod=1e9+7;

    // dp
    vector<vector<int>> dp(n+1,vector<int>(x+1));
    
    for(int i=0;i<=n;i++){

    	dp[i][0]=1;
    }

    // for(int i=0;i<=n;i++){

    // 	for(int j=0;j<=x;j++){
    // 		cout<<dp[i][j]<<" ";
    // 	}
    // 	cout<<endl;
    // }


    for(int i=0;i<n;i++){
    	//debug(v1[i])
    	for(int j=1;j<=x;j++){

    		// picking and not picking
    		int pick=0;
    		int not_pick=0;

    		if(j>=v1[i]){
    			pick=dp[i][j-v1[i]];
    		}

    		if(i>=1){
    			not_pick=dp[i-1][j];
    		}
    		
    		dp[i][j]=(pick+not_pick)%mod;
    		//cout<<j<<endl;
    		//cout<<dp[i][j]<<endl;
    	}
    }

    cout<<dp[n-1][x]<<endl;

    return 0;
}