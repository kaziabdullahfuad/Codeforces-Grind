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

   	const ll mod=1e9+7;
   	//cout<<mod<<endl;
   	vector<ll> dp(x+1);

   	dp[0]=1;

   	//printVector(dp);

   	for(int i=1;i<=x;i++){

   		for(int j=0;j<n;j++){

   			if(i-v1[j]>=0){

   				dp[i]+=dp[i-v1[j]];
   				dp[i]%=mod;
   			}
   		}
   	}

   	//printVector(dp);
   	cout<<dp[x]<<endl;

   	

    return 0;
}