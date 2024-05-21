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
void findDivisors(vector<ll> &divisors,ll val){

	for(ll i=1;i*i<=val;i++){

		if(val%i==0){

			divisors.push_back(i);

			if((val%i)!=i){
				divisors.push_back(val/i);
			}
		}
	}
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

    	// need to find a+b=n such that lcm(a,b) is minimum among all a+b=n.
    	// remember lcm(a,b)=(aXb)/gcd(a,b)
    	// so the lower the axb and higher the gcd the blower is lcm(a,b)
    	//ll val=1e9;
    	//debug(n)
    	vector<ll> divisors;

    	findDivisors(divisors,n);

    	//debug(divisors.size());
    	sort(all(divisors));

    	//printVector(divisors);
    	ll min_val=1e18;
    	ll holder1,holder2;
    	for(ll i=0;i<divisors.size()-1;i++){

    		ll b=n-divisors[i];
    		//debug(divisors[i]) debug(b);
    		ll lcm=(divisors[i]*b)/__gcd(divisors[i],b);
    		//debug(lcm);
    		//min_val=min(min_val,lcm);
    		if(lcm<min_val){
    			holder1=b;
    			holder2=divisors[i];
    			min_val=min(min_val,lcm);
    		}
    	}

    	//cout<<min_val<<endl;
    	cout<<holder2<<" "<<holder1<<endl;

    	t--;
    }

    return 0;
}