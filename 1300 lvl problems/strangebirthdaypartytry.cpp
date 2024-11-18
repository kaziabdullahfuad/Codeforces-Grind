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
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second > b.second);
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
    	vector<ll> v2(m);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}
    	
    	vector<pair<ll,ll>> v3;

    	for(int i=0;i<n;i++){

    		//cout<<v1[i]<<" ";
    		v3.push_back({v1[i],v2[v1[i]-1]});
    	}

    	for(int i=0;i<v3.size();i++){

    		cout<<v3[i].first<<" "<<v3[i].second<<endl;
    	}

    	//sort(all(v3),greater<pair<ll,ll>>());
    	sort(all(v3),sortbysec);

    	cout<<"HERE"<<endl;

    	
    	for(int i=0;i<v3.size();i++){

    		cout<<v3[i].first<<" "<<v3[i].second<<endl;
    	}

    	t--;
    }

    return 0;
}