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
    	vector<ll> v1(n);
    	
    	vector<pair<ll,ll>> v2;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		v2.push_back(make_pair(v1[i],i));
    	}
    	
    	

    	sort(all(v2),greater<pair<int,int>>());
    	

    	ll inc=1;
    	ll sum=0;
    	vector<ll> ans(n);
    	for(ll i=0;i<n;i+=2){

    		sum+=(inc*v2[i].first*2);
    		//cout<<v2[i].second<<endl;
    		ans[v2[i].second]=inc;
    		if(i+1<n){
    			sum+=(inc*v2[i+1].first*2);
    			//cout<<v2[i+1].second<<endl;
    			ans[v2[i+1].second]=-inc;
    		}
    		inc++;
    	}
    	cout<<sum<<endl;
    	cout<<0<<" ";

    	for(int i=0;i<n;i++){
    		cout<<ans[i]<<" ";
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}