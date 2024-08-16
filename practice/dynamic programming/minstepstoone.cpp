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
int minstepstomakeone(int n){

    if(n==1){
        return 0;
    }
    
    int ans=INT_MAX;

    if(n%3==0){
    	ans=min(ans+0LL,1LL+minstepstomakeone(n/3));
    }

    if(n%2==0){
    	ans=min(ans+0LL,1LL+minstepstomakeone(n/2));
    }
   	
   	ans=min(ans+0LL,1LL+minstepstomakeone(n-1));

    return ans;
}
int minstepstomakeonetopdown(int n,vector<int> &dp){

	if(dp[n]!=-1){
		return dp[n];
	}
	else if(n==1){

		return 0;
	}

	int ans=INT_MAX;

	if(n%3==0){
    	ans=min(ans+0LL,1LL+minstepstomakeone(n/3));
    }

    if(n%2==0){
    	ans=min(ans+0LL,1LL+minstepstomakeone(n/2));
    }
   	
   	ans=min(ans+0LL,1LL+minstepstomakeone(n-1));

   	dp[n]=ans;
   	
   	return dp[n];
}
int minstepstomakeonebottomup(int n){

	vector<int> dp(n+1,n+1);
	dp[1]=0;
	//printVector(dp);
	for(int i=2;i<=n;i++){

		if(i%3==0){
			dp[i]=min(dp[i],1+dp[i/3]);
		}

		if(i%2==0){
			dp[i]=min(dp[i],1+dp[i/2]);
		}

		dp[i]=min(dp[i],1+dp[i-1]);
	}

	return dp[n];
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n;
    	cin>>n;

    	//cout<<minstepstomakeone(n)<<endl;
    	vector<int> dp(n+1,-1);
    	//printVector(dp);
    	dp[1]=0;
    	// test cases as n=5,6,10
    	//cout<<minstepstomakeonetopdown(n,dp)<<endl;

    	cout<<minstepstomakeonebottomup(n)<<endl;

    	t--;
    }

    return 0;
}