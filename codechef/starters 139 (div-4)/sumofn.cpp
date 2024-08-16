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
bool is_prime(ll val){

	bool found=true;

	for(ll i=2;i*i<=val;i++){

		if(val%i==0){
			found=false;
			break;
		}
	}

	return found;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll k;
    	cin>>k;

    	// check prime or not
    	// if prime ar nicher joto prime value ase add
    	// prime na hole simply oi val *2 answer

    	if(k==1){
    		cout<<0<<endl;
    	}
    	else if(is_prime(k)){

    		// jehetu prime ar nicher shob prime ber koro
    		ll ans=k*k;

    		// now rest of prime

    		for(ll i=2;i<k;i++){

    			if(is_prime(i)){
    				ans+=(k*i);
    			}
    		}

    		cout<<ans<<endl;
    	}
    	else if(k%2==0){

    		cout<<k*2<<endl;
    	}
    	else{

    		vector<ll> v1;
    		ll go_to=1e3;

    	for(ll i=2;i<=go_to;i++){

    		if(is_prime(i)){
    		v1.push_back(i);
    		}
    	}
    		ll ans=0;
    		for(int i=0;i<v1.size();i++){

    				if(v1[i]*v1[i]<=k){
    					ans+=(v1[i]*k);
    				}
    		}

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}