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
bool check(ll mid,vector<ll> &v1){

	vector<ll> bits(22,0);

	for(int i=0;i<mid;i++){

		ll holder=v1[i];
		ll j=0;

		while(holder){

			if(holder%2){
				bits[j]++;
			}
			j++;
			holder/=2;
		}
	}

	vector<ll> freq=bits;

	// now k theke shuru
	int n=v1.size();

	for(int i=mid;i<n;i++){

		// new val ta dhorbo
		ll holder=v1[i];
		ll j=0;
		while(holder){

			if(holder%2){
				bits[j]++;
			}
			j++;
			holder/=2;
		}

		// now ager val ta remove
		holder=v1[i-mid];
		j=0;
		while(holder){

			if(holder%2){
				bits[j]--;
			}
			j++;
			holder/=2;
		}

		// now full check shob thik ase ki na
		for(int i=0;i<22;i++){

			if(freq[i]>=1 && bits[i]==0){
				return false;
			}
			else if(freq[i]==0 && bits[i]>=1){
				return false;
			}
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

    while(t){

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1){
    		cout<<1<<endl;
    	}
    	else{

    		ll low=1;
    		ll high=n;
    		ll mid=0;
    		ll ans=n;

    		while(low<=high){

    			mid=(low+high)/2;

    			if(check(mid,v1)){
    				ans=mid;
    				high=mid-1;
    			}
    			else{
    				low=mid+1;
    			}
    		}

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}