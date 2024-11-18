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

    	// n= no of shovels
    	// k= no of types of packages
    	ll n,k;
    	cin>>n>>k;

    	if(k>=n){
    		cout<<1<<endl;
    	}
    	else{

    		// find biggest divisor?
    		// or binary search?
    		// find all divisors then find max val<=k

    		vector<ll> divisors;


    		for(ll i=1;i*i<=n;i++){

    			if(n%i==0){

    				divisors.push_back(i);

    				if((n/i)!=i){
    					divisors.push_back(n/i);
    				}
    			}
    		}

    		sort(all(divisors));

    		//printVector(divisors);

    		ll len=divisors.size();
    		ll min_val=1e18;
    		for(int i=0;i<len;i++){

    			if(divisors[i]>k){
    				break;
    			}
    			else{

    				ll hold=n/divisors[i];

    				min_val=min(min_val,hold);
    			}
    		}

    		cout<<min_val<<endl;

    	}

    	t--;
    }

    return 0;
}