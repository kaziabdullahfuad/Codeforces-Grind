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
vector<ll> primes;
map<ll,ll> primekeeper;
void findprimefactos(map<ll,ll> &m1,ll val){

	if(val==1){
		return;
	}
	if(primekeeper[val]>=1){

		m1[val]++;
		return;
	}

	ll n=primes.size();

	for(int i=0;i<n;i++){


		while(val%primes[i]==0){

			m1[primes[i]]++;
			val/=primes[i];
		}

		if(val==1){
			break;
		}
		else if(primekeeper[val]>=1){
			m1[val]++;
			break;
		}
	}

}
bool isprime(ll n){

	if(n==2){
		return true;
	}

	for(int i=2;i*i<=n;i++){

		if(n%i==0){
			return false;
		}
	}

	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    

    ll till=1e6;

    for(int i=2;i<=till;i++){

    	if (isprime(i)){

    		primekeeper[i]=1;
    		primes.push_back(i);
    	}
    }

    // cout<<primes.size()<<endl;
    // printVector(primes);

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	// find no of divisors
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){


    		findprimefactos(m1,v1[i]);
    	}

    	bool found=true;
    	for(auto x:m1){

    		//cout<<x.first<<" "<<x.second<<endl;
    		if(x.second%n!=0){
    			found=false;
    			break;
    		}

    	}
    	//cout<<endl;

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}