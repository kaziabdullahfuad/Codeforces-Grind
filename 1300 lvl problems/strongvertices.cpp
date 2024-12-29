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
    	vector<ll> v2(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	vector<pair<ll,ll>> v3;

    	for(int i=0;i<n;i++){

    		v3.push_back({v1[i]-v2[i],i+1});
    	}

    	sort(all(v3));
    	//printVector(v3);

    	ll max_val=v3[n-1].first;
    	ll count=1;
    	vector<ll> ans;
    	
    	ans.push_back(v3[n-1].second);
    	for(int i=n-2;i>=0 && v3[i].first==max_val;i--){

    		count++;
    		ans.push_back(v3[i].second);
    	}

    	//debug(count)

    	sort(all(ans));

    	cout<<count<<endl;
    	printVector(ans);

    	t--;
    }

    return 0;
}