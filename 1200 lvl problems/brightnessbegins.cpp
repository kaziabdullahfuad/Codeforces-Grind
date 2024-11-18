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
ll check(ll mid,ll k){

	// find out perfect square koita
	ll count=0;
	for(ll i=1;i*i<=mid;i++){

		count++;
	}

	ll val=mid-count;
	//debug(val)
	return val;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll k;
    	cin>>k;

    	ll low=0;
    	ll high=4e18;
    	ll ans=4e18;
    	//debug(ans)
    	//ll temp=sqrtl(13);
    	//debug(temp)
    	//cout<<temp<<endl;
    	while(low<=high){

    		ll mid=low+(high-low)/2ll;
    		//debug(mid)
    		ll val=mid-(ll)sqrtl(mid);
    		//debug(val)
    		if(val>=k){

    			ans=min(ans,mid);

    			high=mid-1;
    		}
    		else{
    			// choto tahole aro boro dekhte hobe

    			low=mid+1;
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}