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

    	ll l,r;
    	cin>>l>>r;

    	if(l%2==0){

    		ll total=r-l+1;
    		ll no_odds=total/2;
    		ll even=total-no_odds;

    		ll ans=0;

    		ll odd_pair=no_odds/2;

    		//cout<<total<<" "<<no_odds<<" "<<even<<" "<<odd_pair<<endl;

    		ans+=min(odd_pair,even);
    		cout<<ans<<endl;

    	}
    	else{

    		ll total=r-l+1;

    		if(total%2==0){

    			ll no_odds=total/2;
    		ll even=total-no_odds;

    		ll ans=0;

    		ll odd_pair=no_odds/2;

    		//cout<<total<<" "<<no_odds<<" "<<even<<" "<<odd_pair<<endl;

    		ans+=min(odd_pair,even);
    		cout<<ans<<endl;
    		}
    		else{

    		ll no_odds=(total+1)/2;
    		ll even=total-no_odds;

    		ll ans=0;

    		ll odd_pair=no_odds/2;

    		//cout<<total<<" "<<no_odds<<" "<<even<<" "<<odd_pair<<endl;

    		ans+=min(odd_pair,even);
    		cout<<ans<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}