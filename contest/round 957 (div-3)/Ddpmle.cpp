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
//const int len=2e5+5;
ll dp[200005];
ll rec(int i,int n,int m,int k,string s){

	if(i>=n){
		// size ar theke beshi
		return 0;
	}

	if(dp[i]!=-1){
		// age thekei calculate kora ase
		return dp[i];
	}
	if(s[i]=='C'){
		// impossible
		return INT_MAX;
	}
	if(s[i]=='W'){
		// swim kore next a

		dp[i]=1+rec(i+1,n,m,k,s);
		return dp[i];
	}

	// jodi log hoi
	ll jump=INT_MAX;
	for(int j=1;j<=m;j++){

		// all possible combinations of jump
		// and oi state theke shobche minimum jump kon ta laage
		jump=min(jump,rec(i+j,n,m,k,s));
	}

	dp[i]=jump;
	return dp[i];
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	// n=size,m=jumps,k=swim
    	ll n,m,k;
    	cin>>n>>m>>k;

    	string s;
    	cin>>s;
    	s='L'+s;
    	//cout<<s<<endl;
    	n++;

    	for(int i=0;i<200005;i++){
    		dp[i]=-1;
    	}

    	ll ans=rec(0,n,m,k,s);
    	//cout<<ans<<endl;

    	if(ans<=k){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}