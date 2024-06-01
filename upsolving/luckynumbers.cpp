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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll l,r;
    	cin>>l>>r;
    	
    	if(r-l<100){

    		ll max_val=0;
    		ll max_diff=0;
    		ll ans=l;
    		for(ll i=l;i<=r;i++){

    			ll holder=i;
    			ll max_val=-1e18;
    			ll min_val=1e18;
    			while(holder){

    				ll temp=holder%10;
    				max_val=max(max_val,temp);
    				min_val=min(min_val,temp);
    				holder/=10;
    			}

    			ll diff=max_val-min_val;
    			if(diff>max_diff){
    				ans=i;
    				max_diff=diff;
    			}
    		}

    		// cout<<ans<<" "<<max_diff<<endl;
    		cout<<ans<<endl;
    	}
    	else{

    		ll max_val=0;
    		ll max_diff=0;
    		ll ans=l;
    		ll range=l+100;
    		for(ll i=l;i<=range;i++){

    			ll holder=i;
    			ll max_val=-1e18;
    			ll min_val=1e18;
    			while(holder){

    				ll temp=holder%10;
    				max_val=max(max_val,temp);
    				min_val=min(min_val,temp);
    				holder/=10;
    			}

    			ll diff=max_val-min_val;
    			if(diff>max_diff){
    				ans=i;
    				max_diff=diff;
    			}
    		}

    		//cout<<ans<<" "<<max_diff<<endl;
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}