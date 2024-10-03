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
bool check(ll val){

	if(val==2){
		return true;
	}
	else if(val==1){
		return false;
	}
	bool found=true;

	for(int i=2;i<val;i++){

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

    	ll l,r;
    	cin>>l>>r;

    	// no of primes between l and r
    	vector<ll> primes;
    	for(ll i=l;i<=r;i++){

    		if(check(i)){

    			primes.push_back(i);
    		}
    	}

    	printVector(primes);

    	ll remain=(r-l+1)-primes.size();
    	//debug(remain)

    	ll prime_pairs=primes.size()/2;
    	ll prime_remain=primes.size()%2;
    	ll ans=0;

    	ans+=min(prime_pairs,remain);
    	ll remain_of=remain-ans;

    	//cout<<ans<<" "<<prime_remain<<endl;
    	//cout<<remain_of<<endl;

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}