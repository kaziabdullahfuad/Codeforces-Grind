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

    	ll l,r,k;
    	cin>>l>>r>>k;

    	ll segment=r-l+1;
    	//debug(segment)

    	if(k==1){
    		cout<<segment<<endl;
    	}
    	else{

    		ll low=l;
    		ll high=r;
    		ll ans=0;
    		//debug(l)
    		//debug(high)
    		while(low<=high){

    			//ll mid=low+(high-low)/2ll;
    			ll mid=(low+high)/2ll;

    			ll hold=(mid*k);
    			//debug(mid)
    			//debug(hold)
    			if(hold<=r){

    				ans=max(ans,mid);
    				low=mid+1;
    			}
    			else{
    				// aro boro
    				high=mid-1;
    			}
    			//debug(mid)
    		}
    		if(ans==0){
    			cout<<0<<endl;
    		}
    		else{
    			cout<<ans-l+1<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}