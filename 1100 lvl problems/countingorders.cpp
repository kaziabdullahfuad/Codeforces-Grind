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
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}
    	
    	// printVector(v1);
    	// printVector(v2);

    	sort(all(v1)); sort(all(v2));

    	//printVector(v1);
    	//printVector(v2);

    	bool found=true;

    	for(int i=0;i<n;i++){

    		if(v2[i]>=v1[i]){
    			found=false;
    			break;
    		}
    	}

    	if(found){

    		sort(all(v2),greater<ll>());
    		//printVector(v2);

    		// boro gula theke dekho
    		ll ans=1;
    		ll count=0;
    		// proti ta value ar theke shoman ba boro koita value ase
    		vector<ll>::iterator upper;
    		for(int i=0;i<n;i++){

    			upper=upper_bound(all(v1),v2[i]);
    			ll total=(n-(upper-v1.begin())-count)%mod;
    			//cout<<v2[i]<<" "<<total<<endl;
    			ans*=total%mod;
    			ans%=mod;
    			count++;
    		}

    		cout<<ans%mod<<endl;

    	}
    	else{
    		cout<<0<<endl;
    	}

    	t--;
    }

    return 0;
}