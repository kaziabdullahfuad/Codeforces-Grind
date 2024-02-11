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
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
ll fact(ll n)
{
      if(n==0)
      return 1;
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;

    return res;
}
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
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
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}

    	if(n==1 || n==2){
    		cout<<0<<endl;
    	}
    	else if(n==3){
    		cout<<1<<endl;
    	}
    	else{

    		ll count=0;
    		for(auto x:m1){

    			if(x.second>=3){
    				count+=3;
    			}
    			else{
    				count+=x.second;
    			}
    		}
    		cout<<count<<endl;

    		if(count==n){
    			cout<<1<<endl;
    		}
    		else{

    			cout << nCr(n, count);

    		}
    	}
    	

    	t--;
    }

    return 0;
}