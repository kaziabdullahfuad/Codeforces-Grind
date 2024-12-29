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

    	ll k,x;
    	cin>>k>>x;

    	ll levels=2ll*k-1;
    	//debug(levels)

    	ll total=k*k;
    	//debug(total)
    	ll kval=(k*(k+1))/2ll;

    	// debug(x)
    	// debug(kval)

    	if(x>=total){

    		cout<<levels<<endl;
    	}
    	else if(x<=kval){

    		// tahole level 1 to k ar moddhei thakbe

    		ll low=1;
    		ll high=k;
    		ll ans=k;
    		while(low<=high){

    			ll mid=low+(high-low)/2;

    			ll hold=(mid*(mid+1))/2ll;
    			// debug(mid)
    			// debug(hold)
    			if(hold>=x){

    				// aro choto pawa jai ki na dekhbo
    				high=mid-1;
    				ans=mid;

    			}
    			else{
    				low=mid+1;
    			}

    		}

    		cout<<ans<<endl;
    	}
    	else{

    		// min k level to hobei
    		// ar por ar koto add korbo
    		ll ans=k;

    		ll low=1;
    		ll high=levels-k;
    		//debug(high)

    		ll sum=(high*(high+1ll))/2ll;
    		//debug(sum)
    		ll adder=high;
    		ll temp=high;
    		ll remain=x-kval;
    		//debug(remain)
    		while(low<=high){

    			ll mid=low+(high-low)/2ll;

    			ll holder=temp-mid;
    			ll keep=(holder*(holder+1))/2ll;
    			ll val=sum-keep;

    			if(val>=remain){

    				high=mid-1;
    				adder=mid;
    			}
    			else{
    				low=mid+1;
    			}

    		}

    		//debug(adder)
    		ans+=adder;
    		//debug(ans)
    		cout<<ans<<endl;

    	}


    	t--;
    }

    return 0;
}