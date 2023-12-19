//problem link:https://codeforces.com/problemset/problem/1867/A
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    // cout<<"hello man";
    // //cout<<'\n';
    while(t){

    	ll n;
    	cin>>n;
    	vector<pair<ll,ll>> v1;

    	// the main idea is to match indexes
    	// with the highest and lowest accordingly
    	// this is why pair is needed
    	for(int i=0;i<n;i++){

    		ll val;
    		cin>>val;
    		v1.push_back({val,i});
    	}

    	// now sort it then reverse it
    	// to match highest with lowest
    	// if values are 8 10 6 by sorting it will
    	// become 6 8 10 with proper indexes and than we match
    	sort(v1.begin(),v1.end());
    	reverse(v1.begin(),v1.end());

    	vector<ll>holder(n);
    	ll start=1;
    	for(int i=0;i<n;i++){

    		holder[v1[i].second]=start;
    		start++;
    	}

    	for(auto x:holder) cout<<x<<" ";
    	cout<<endl;
    	

    	t--;
    }

    return 0;
}