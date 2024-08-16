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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		
    	}

    	
		vector<ll> prefix(n);
		vector<ll> suffix(n);

		prefix[0]=v1[0];

		for(int i=1;i<n;i++){

			prefix[i]=prefix[i-1]+v1[i];
		}

		suffix[n-1]=v1[n-1];

		for(int i=n-2;i>=0;i--){

			suffix[i]=suffix[i+1]+v1[i];
		}

		//printVector(prefix);
		//printVector(suffix);

		ll ans=abs(prefix[n-1]);

		for(int i=0;i<n-1;i++){

			ll sum=abs(prefix[i])+suffix[i+1];
			ans=max(ans,sum);
		}

		cout<<ans<<endl;
	
    	
    	
    	

    	t--;
    }

    return 0;
}