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

    	// find all divisors using sqrt
    	vector<ll> divisors;

    	for(int i=1;i*i<=n;i++){

    		if(n%i==0){
    			divisors.push_back(i);

    			if((n/i)!=i){
    				divisors.push_back(n/i);
    			}
    		}
    	}

    	int len=divisors.size();
    	sort(all(divisors));
    	//printVector(divisors);
    	ll min_a=1;
    	ll min_b=n-1;
    	ll min_lcm=1e18;
    	for(int i=0;i<len-1;i++){

    		ll a=divisors[i];
    		ll b=n-a;
    		//cout<<a<<" "<<b<<endl;
    		ll thegcd=__gcd(a,b);

    		ll thelcm=(a*b)/thegcd;
    		//debug(thelcm)
    		if(thelcm<min_lcm){
    			min_lcm=thelcm;
    			min_a=a;
    			min_b=b;
    		}

    	}

    	cout<<min_a<<" "<<min_b<<endl;

    	t--;
    }

    return 0;
}