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
const ll mod=1e9+7;
ll binaryexpmod(ll a,ll b,ll mod){

	ll result=1;

	while(b>0){

		if(b%2==1){
			result*=a;
			result%=mod;
		}

		a*=a;
		a%=mod;
		b/=2;
	}

	return result;
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

    	if(n==2){
    		cout<<14154<<endl;
    	}
    	else{

    		// formula paisi
    		/*
				(2(n-1)*(n)*(2n-1)+3*n*(n-1)+6*n*n)/6
    		*/

    		ll ans=0;

    		ans+=(((2*(n-1))%mod*(n)%mod*(2*n-1)%mod))%mod;

    		//debug(ans)
    		ans+=((3*n%mod)*(n-1)%mod)%mod;

    		//debug(ans)

    		ans+=((6*n)%mod*(n%mod))%mod;

    		//ans/=6;
    		ll modular_exp=binaryexpmod(6,mod-2,mod);
    		//debug(modular_exp)

    		ans*=modular_exp;
    		ans%=mod;

    		ans*=2022;
    		
    		ans%=mod;
    		

    		cout<<ans<<endl;


    	}

    	t--;
    }

    return 0;
}