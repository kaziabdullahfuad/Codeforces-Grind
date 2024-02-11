// problem link:https://codeforces.com/group/isP4JMZTix/contest/386415/problem/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll> v1(n);
    
    /*
        INPUT:
        7 3
        1 2 6 1 1 7 1

    */


    // n=7, k=3, n-k=7-3=4
    // plus 1 korte hobe n-k+1=7-3+1=5
    // 1 2 6 1 1 7 1

    // brute force method
    // time complexity n^2
    // so if n=1.5*10^5 then for n^2 (2.25*10^10) operations
    // in 1 second there can be 10^8 operations max
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    ll min_val=1e18;
    //cout<<min_val<<endl;
    ll index;
    for(int i=0;i<n-k+1;i++){
    	// cout<<i<<",";
    	// cout<<v1[i]<<":";
    	ll sum=0;
    	for(int j=i;j<i+k;j++){
    		//cout<<v1[j]<<" ";
    		sum+=v1[j];
    	}
    	// cout<<sum;
    	// cout<<endl;
    	if(sum<min_val){
    		index=i;
    		min_val=sum;
    	}
    }
    cout<<index+1<<endl;
    //cout<<min_val;
    //cout<<endl;
    

    return 0;
}