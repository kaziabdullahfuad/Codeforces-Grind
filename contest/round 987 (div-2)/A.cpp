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
    	
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		ll maxval=1;

    		for(auto x:m1){

    			maxval=max(maxval,x.second);
    		}

    		cout<<n-maxval<<endl;

    	}

    	t--;
    }

    return 0;
}