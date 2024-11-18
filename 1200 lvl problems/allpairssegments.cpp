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

    	ll n,q;
    	cin>>n>>q;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){

    		// first find out ata koto jagai contribute kore

    		ll total_contri=(i+1)*(n-i);
    		total_contri--;
    		m1[total_contri]++;

    		// nd segment ase ki na
    		
    		if(i<(n-1)){

    			if(v1[i+1]-v1[i]>=2){

    				ll segments=v1[i+1]-v1[i]-1;

    				// nd ai segments gular value

    				ll segments_val=(i+1)*(n-i-1);

    				m1[segments_val]+=segments;
    			}
    		}

    	}

    	// cout<<"HERE"<<endl;
    	// for(auto x:m1){

    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	while(q){

    		ll temp;
    		cin>>temp;

    		cout<<m1[temp]<<" ";

    		q--;
    	}
    	
    	cout<<endl;

    	t--;
    }

    return 0;
}