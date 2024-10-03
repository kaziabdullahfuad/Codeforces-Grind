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

    	ll m,p;
    	cin>>m>>p;

    	if(m>=299){
    		cout<<0<<endl;
    	}
    	else{

    		ll segment=299-m;

    		//cout<<segment<<endl;

    		ll parbo=(1000-p)/20;
    		//debug(parbo)

    		ll nibo=min(parbo,segment);

    		//debug(nibo)

    		if(nibo==0){

    			cout<<0<<endl;
    		}
    		else{

    			ll ans=0;
    			for(ll i=nibo;i>=1;i--){

    				//debug(i)
    				ll low_nibo=i+m;
    				ll total=p+(i*20);
    				ll remain=1000-total;

    				//cout<<low_nibo<<" "<<total<<" "<<remain<<endl;

    				if(low_nibo<=remain){
    					ans=i;
    					break;
    				}
    			}

    			cout<<ans<<endl;
    		}

    		
    	}

    	t--;
    }

    return 0;
}