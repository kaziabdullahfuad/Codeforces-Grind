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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
void find_divisors(ll n,vector<ll> &divisors){

	for(ll i=1;i*i<=n;i++){

		if(n%i==0){

			if((n/i)==i){
				divisors.push_back(i);
			}
			else{
				divisors.push_back(i);
				divisors.push_back(n/i);
			}
		}
	}
}
bool is_prime(ll val){

	bool found=true;
	for(ll i=2;i<=val-1;i++){

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

    // 10000 ar difference
    ll first_dif=1+10000;
    //debug(first_dif)
    ll holder=0;

    while(first_dif){

    	if(is_prime(first_dif)){
    		holder=first_dif;
    		break;
    	}
    	first_dif++;
    }
    //cout<<holder<<endl;
    ll second_dif=holder+10000;
    ll second_holder=0;
    //debug(second_dif)
    while(second_dif){

    	if(is_prime(second_dif)){
    		second_holder=second_dif;
    		break;
    	}
    	second_dif++;
    }

    //debug(second_holder);
    vector<ll> all_primes;

    for(ll i=2;i<=second_holder;i++){

    	if(is_prime(i)){
    		all_primes.push_back(i);
    	}
    }
    //cout<<all_primes.size()<<endl;
    //printVector(all_primes);
    while(t){

  		ll d;
  		cin>>d;
  		//debug(d)
  		ll first_dif=1+d;
  		ll len=all_primes.size();
  		ll first=0;
  		for(int i=0;i<len;i++){

  			if(all_primes[i]>=first_dif){
  				first=all_primes[i];
  				break;
  			}
  		}
  		ll second_diff=first+d;
  		ll second=0;
  		for(int i=0;i<len;i++){

  			if(all_primes[i]>=second_diff){
  				second=all_primes[i];
  				break;
  			}
  		}
  		//debug(first) debug(second)

  		ll ans=first*second;
  		cout<<ans<<endl;

    	t--;
    }

    return 0;
}