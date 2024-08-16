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
bool is_okay(ll holder,ll a){

	ll count=0;

	while(holder){

		count++;
		holder/=10;
	}

	if(count==a){
		return true;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    vector<ll> primes;

    primes.push_back(2);//1
    primes.push_back(11);//2
    primes.push_back(101);//3
    primes.push_back(1009 );//4
    primes.push_back(10007);//5
    primes.push_back(100003); // 6 dig
    primes.push_back(1000003); // 7 dig
    primes.push_back(10000019); // 8 dig
    primes.push_back(100300001); // 9 dig

   // printVector(primes);
    while(t){

    	ll a,b,c;
    	cin>>a>>b>>c;

    	ll z=primes[c-1];
    	// now a ar b khujte hobe
    	ll holder=z;
    	//debug(z)
    	while(holder){

    		if(is_okay(holder,a)){

    			break;
    		}
    		holder*=2;
    	}
    	ll x=holder;
    	
    	holder=z;
    	while(holder){

    		if(is_okay(holder,b)){

    			break;
    		}
    		holder*=3;
    	}

    	ll y=holder;

    	cout<<x<<" "<<y<<endl;

    	t--;
    }

    return 0;
}