// problem link:https://codeforces.com/contest/1901/problem/B
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

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	ll diff=0;
    	for(ll i=1;i<n;i++){

    		if(v1[i]>v1[i-1]){
    			//cout<<i<<" "<<i-1<<endl;
    			//cout<<v1[i]<<" "<<v1[i-1]<<endl;
    			//cout<<v1[i]-v1[i-1]<<endl;
    			ll holder=v1[i]-v1[i-1];
    			diff+=holder;
    		}

    	}
    	//cout<<diff<<endl;
    	
    	cout<<(v1[0]-1)+diff<<endl;
    	

    	t--;
    }

    return 0;
}