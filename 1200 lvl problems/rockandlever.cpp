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
    	
    	//printVector(v1);
    	ll count=0;
    	map<ll,ll>m1;
    	for(ll i=0;i<n;i++){

    		// find the last bit and save in map
    		ll last=1;
    		//cout<<v1[i]<<endl;
    		for(ll j=31;j>=0;j--){

    			if((1<<j)&v1[i]){
    				last=j;
    				break;
    			}
    			
    		}
    		//debug(last)
    		//debug(m1[last])
    		
    		if(m1[last]>0){
    			count+=m1[last];
    			m1[last]++;
    		}
    		else{
    			m1[last]++;
    		}

    		//debug(count)
    		
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}