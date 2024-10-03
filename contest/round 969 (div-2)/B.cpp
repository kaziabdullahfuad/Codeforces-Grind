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

    	ll n,m;
    	cin>>n>>m;
    	vector<ll> v1(n);
    	ll max_val=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		max_val=max(max_val,v1[i]);
    	}

    	while(m){

    		char c;
    		cin>>c;
    		ll l,r;
    		cin>>l>>r;

    		if(c=='+'){

    			if(max_val>=l && max_val<=r){

    				max_val++;
    			}
    		}
    		else{

    			if(max_val>=l && max_val<=r){

    				max_val--;
    			}
    		}

    		cout<<max_val<<" ";

    		m--;

    	}
    	
    	cout<<endl;

    	t--;
    }

    return 0;
}