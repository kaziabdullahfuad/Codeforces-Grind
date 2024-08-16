#include<iostream>
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
class Solution {
public:
    int coinChange(vector<int>& coins,int amount) {
        
        if(amount==0){
        	return 0;
        }
        vector<int> dp(amount+1,-1);

        //printVector(dp);

        coinChangetopdown(coins,amount,dp);

        //printVector(dp);

        if(dp[amount]==INT_MAX){
        	return -1;
        }
        else{
        	return dp[amount];
        }
    }

    int coinChangetopdown(vector<int> &coins,int amount,vector<int> &dp){

    	if(dp[amount]!=-1){
    		return dp[amount];
    	}
    	else if(amount==0){
    		return 0;
    	}
    	int ans=INT_MAX;

    	for(int i=0;i<coins.size();i++){

    		if(amount-coins[i]>=0){
    			// the ll is avoid overflow since if the function returns int_max
    			// then adding+1 to it would make it overflow and both have to
    			// be made long long since min function compared both same data types
    			ans=min(ans+0LL,1LL+coinChangetopdown(coins,amount-coins[i],dp));
    		}
    	}
    	
    	dp[amount]=ans;
    	return dp[amount];
    }
};
int main()
{
	Solution sol1;
	// vector<int> coins={3,7,405,436};
	// int amount=8839;
	// vector<int> coins={1,2,5};
	// int amount=11;
	vector<int> coins={2};
	int amount=3;

	cout<<sol1.coinChange(coins,amount)<<endl;


    return 0;
}