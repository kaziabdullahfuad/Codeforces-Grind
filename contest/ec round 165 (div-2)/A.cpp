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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	
    	map<ll,ll> m1;

    	for(int i=1;i<=n;i++){
    		// kontar best friend konta
    		m1[v1[i]]=v1[v1[i]];
    	}
    	
    	vector<pair<ll,ll>> v2;
    	for(auto x:m1){
    		//cout<<x.first<<" "<<x.second<<endl;
    		v2.push_back(make_pair(x.first,x.second));
    	}
    	bool found=false;
    	for(int i=0;i<v2.size()-1;i++){
    		ll first=v2[i].first;
    		ll second=v2[i].second;
    		//cout<<first<<" "<<second<<endl;
    		for(int j=i+1;j<v2.size();j++){

    			//cout<<v2[j].first<<" "<<v2[j].second<<endl;
    			ll a=v2[j].first;
    			ll b=v2[j].second;

    			if(first==b && second==a){
    				//cout<<first<<" "<<second<<endl;
    				//cout<<a<<" "<<b<<endl;
    				found=true;
    				break;
    			}
    		}
    	}

    	if(found){
    		cout<<2<<endl;
    	}
    	else{
    		cout<<3<<endl;
    	}

    	t--;
    }

    return 0;
}