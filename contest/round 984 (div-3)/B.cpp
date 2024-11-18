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

    	ll n,k;
    	cin>>n>>k;

    	map<ll,ll> m1;

    	while(k){

    		// b=brand , c=cost
    		ll b,c;
    		cin>>b>>c;

    		m1[b]+=c;

    		k--;
    	}

    	vector<ll> holder;
    	for(auto x:m1){

    		//cout<<x.first<<" "<<x.second<<endl;
    		holder.push_back(x.second);
    	}

    	sort(all(holder),greater<ll>());

    	//printVector(holder);

    	ll len=holder.size();
    	ll go_till=min(n,len);

    	//cout<<go_till<<endl;

    	ll sum=0;
    	for(int i=0;i<go_till;i++){

    		sum+=holder[i];
    	}	

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}