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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	

    	ll max_ele=*max_element(all(v1));

    	ll low=max_ele;
    	ll high=1e16; // since 10^9*10^5=9+5=10^14
    	ll sum=accumulate(all(v1),0ll);
    	ll ans=1e18;
    	while(low<=high){

    		ll mid=low+(high-low)/2;

    		ll hold=mid*x;

    		if(hold>=sum){

    			// aro baam a khujo
    			high=mid-1;
    			ans=min(ans,mid);
    		}
    		else{
    			low=mid+1ll;
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}