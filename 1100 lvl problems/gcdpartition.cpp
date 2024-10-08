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

    int t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	ll sum=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    	}
    	
    	vector<ll> prefix(n+1);

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i-1];
    	}

    	
    	//cout<<"HERE"<<endl;
    	ll max_val=1;
    	for(int i=1;i<n;i++){
    		
    		ll remain=sum-prefix[i];
    		//cout<<prefix[i]<<" "<<remain<<" "<<__gcd(prefix[i],remain)<<endl;
    		//cout<<__gcd(v1[i],remain)<<endl;
    		max_val=max(max_val,__gcd(prefix[i],remain));
    	}

    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}