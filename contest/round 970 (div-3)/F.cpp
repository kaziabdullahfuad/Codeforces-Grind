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
ll inversefind(ll a,ll b){

	if(b==1){
		return a;
	}

	ll val=inversefind(a,b/2)%mod;

	if(b%2==0){

		return (val*val)%mod;
	}
	else{

		return (((val*val)%mod)*(a%mod))%mod;
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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll divider=(n*(n-1))/2;
    	//cout<<divider<<endl;

    	vector<ll> suffix(n);

    	suffix[n-1]=v1[n-1];

    	//printVector(v1);

    	for(int i=n-2;i>=0;i--){

    		suffix[i]=v1[i]+suffix[i+1];
    	}

    	//printVector(suffix);
    	ll sum=0;
    	for(int i=0;i<n-1;i++){

    		//cout<<v1[i]<<" "<<suffix[i+1]<<endl;
    		ll holder=suffix[i+1]%mod;
    		sum+=(v1[i]*holder);
    		sum%=mod;
    		//debug(sum)
    	}

    	//debug(sum)

    	ll inverse=inversefind(divider,mod-2)%mod;

    	//cout<<inverse<<endl;

    	//cout<<divider*inverse%mod<<endl;

    	ll ans=(sum*inverse)%mod;
    	cout<<ans<<endl;



    	t--;
    }

    return 0;
}