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
    int coinChange(vector<int> coins,int amount) {
        
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        //printVector(dp);
        int n=coins.size();
        for(int i=1;i<=amount;i++){

        	int ans=INT_MAX;
        	for(int j=0;j<n;j++){

        		if(coins[j]<=i){
        			ans=min(ans+0LL,dp[i-coins[j]]+1LL);
        			//cout<<"VAL GULO"<<endl;
        			//cout<<i<<" "<<i-coins[j]<<" "<<dp[i-coins[j]]<<endl;
        		}
        	}
        	dp[i]=ans;
        	//printVector(dp);
        }
       // cout<<"HERE"<<endl;
        //printVector(dp);

        if(dp[amount]==INT_MAX){
        	return -1;
        }
        else{
        	return dp[amount];
        }
    }
};
int main()
{
	Solution sol1;

	// vector<int> coins={3,7,405,436};
	// int amount=8839;
	vector<int> coins={1,2,5};
	int amount=11;
	// vector<int> coins={2};
	// int amount=3;
	// vector<int> coins={2,4};
	// int amount=5;

	cout<<sol1.coinChange(coins,amount)<<endl;
	

    return 0;
}