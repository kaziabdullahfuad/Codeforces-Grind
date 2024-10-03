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

    // problem link- https://lightoj.com/problem/be-efficient
    int t;
    cin>>t;

    ll start=1;
    while(t){

    	ll n,m;
    	cin>>n>>m;
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	
    	vector<ll> prefix(n+1);

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i];
    	}

    	//printVector(v1);
    	//printVector(prefix);
    	map<ll,ll> m1;
    	m1[0]=1;
    	ll count=0;
    	for(int i=1;i<=n;i++){

    		// koto lage
    		ll mod_val=prefix[i]%m;
    		//cout<<prefix[i]<<" "<<mod_val<<endl;
    		count+=m1[mod_val];

    		m1[mod_val]++;
    	}

    	cout<<"Case "<<start<<": "<<count<<endl;

    	start++;

    	t--;
    }

    return 0;
}