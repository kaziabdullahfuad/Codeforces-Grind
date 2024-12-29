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
ll len=1e5+10;
vector<ll> dp(len,-1);
// ll recur(ll n){

// 	if(dp[n]!=-1){
// 		return dp[n];
// 	}


// 	ll hold=recur(n/2);



// }
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    dp[1]=1;
    dp[2]=2;
    dp[3]=2;
    dp[4]=2;
    dp[5]=3;
    dp[6]=3;

    while(t){

    	ll n;
    	cin>>n;

    	if(n==1){
    		cout<<1<<endl;
    	}
    	else if(n==2 || n==3 || n==4){

    		cout<<2<<endl;
    	}
    	else if(dp[n]!=-1){

    		cout<<dp[n]<<endl;
    	}
    	else{

    		//ll ans=recur(n);

    		ll count=2;
    		ll start=4;

    		while(start<n){

    			start=(start+1ll)*2ll;
    			//debug(start)
    			count++;
    		}

    		dp[n]=count;

    		cout<<count<<endl;
    	}

    	t--;
    }

    return 0;
}