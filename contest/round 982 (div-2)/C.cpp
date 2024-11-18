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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	vector<pair<ll,ll>> v2;

    	for(int i=1;i<n;i++){

    		// len calculate korbo
    		ll holder=i+1;

    		v2.push_back({v1[i]+holder-1,holder-1});
    	}

    	ll len=v2.size();

    	// for(int i=0;i<len;i++){

    	// 	cout<<v2[i].first<<" "<<v2[i].second<<endl;
    	// }

    	sort(all(v2));
    	set<ll> s1;
    	s1.insert(n);
    	ll max_val=n;
    	for(int i=0;i<len;i++){

    		if(s1.find(v2[i].first)!=s1.end()){

    			s1.insert(v2[i].first+v2[i].second);
    			max_val=max(max_val,v2[i].first+v2[i].second);
    		}
    	}

    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}