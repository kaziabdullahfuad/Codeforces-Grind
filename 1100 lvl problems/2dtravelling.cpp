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

    	ll n,k,s,e;
    	cin>>n>>k>>s>>e;
    	vector<pair<ll,ll>> v1;

    	for(int i=0;i<n;i++){
    		ll val1,val2;
    		cin>>val1>>val2;
    		v1.push_back(make_pair(val1,val2));
    	}

    	ll min_one=abs(v1[s-1].first-v1[e-1].first)+abs(v1[s-1].second-v1[e-1].second);
    	//cout<<min_one<<endl;

    	ll min_val=1e18;
    	ll min_val_two=1e18;

    	for(int i=0;i<k;i++){

    		min_val=min(min_val,abs(v1[s-1].first-v1[i].first)+abs(v1[s-1].second-v1[i].second));
    		min_val_two=min(min_val_two,abs(v1[i].first-v1[e-1].first)+abs(v1[i].second-v1[e-1].second));
    	}

    	cout<<min(min_one,min_val+min_val_two)<<endl;
    	
    	t--;
    }

    return 0;
}