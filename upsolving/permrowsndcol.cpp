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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,m;
    	cin>>n>>m;
    	
    	vector<vector<ll>> v1(n,vector<ll>(m));
    	vector<vector<ll>> v2(n,vector<ll>(m));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			cin>>v1[i][j];
    		}
    	}

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			cin>>v2[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){
    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){
    	// 		cout<<v2[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }
    	
    	ll len=n*m+1;
    	vector<pair<ll,ll>> dp(len);

    	//cout<<len<<endl;

    	// a ar jonno dekhob

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			//cout<<v1[i][j]<<" ";
    			dp[v1[i][j]].first=i+1;
    			dp[v1[i][j]].second=j+1;
    		}
    		//cout<<endl;
    	}
    	//cout<<"HERE"<<endl;
    	// for(int i=1;i<len;i++){
    	// 	cout<<dp[i].first<<" "<<dp[i].second<<endl;
    	// }

    	// b ar jonno dekho
    	bool found=true;
    	for(int i=0;i<n;i++){

    		ll val=dp[v2[i][0]].first;
    		//cout<<v2[i][0]<<endl;
    		//debug(val);
    		for(int j=0;j<m;j++){

    			//cout<<v2[i][j]<<" ";
    			// jodi ai row ar values gula oi row ar same na hoi tahole vul
    			if(dp[v2[i][j]].first!=val){
    				found=false;
    				//cout<<"PAISE row"<<endl;
    				//cout<<v2[i][j]<<" "<<val<<endl;
    				break;
    			}

    		}
    		//cout<<endl;
    	}

    	for(int i=0;i<m;i++){

    		ll val=dp[v2[0][i]].second;
    		//cout<<v2[i][0]<<endl;
    		//debug(val);
    		for(int j=0;j<n;j++){

    			//cout<<v2[j][i]<<" ";
    			// jodi ai row ar values gula oi row ar same na hoi tahole vul
    			if(dp[v2[j][i]].second!=val){
    				found=false;
    				//cout<<"PAISE column"<<endl;
    				//cout<<v2[i][j]<<" "<<val<<endl;
    				break;
    			}

    		}
    		
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}