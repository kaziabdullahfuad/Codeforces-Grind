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

    vector<ll> prefix(2e5+1);
    vector<ll> prefixsum(2e5+1);

    for(ll i=0;i<=2e5;i++){

    	

		ll temp=i;
		ll count=0;
		while(temp){

			temp/=3;
			count++;
		}
		
		prefix[i]=count;
    	
    }

    

    for(int i=1;i<=2e5;i++){

    	prefixsum[i]=prefixsum[i-1]+prefix[i];
    }

  	cout<<"BEFORE"<<endl;
    cout<<prefix[200000]<<endl;
    cout<<prefix[199999 ]<<endl;
    ll hold=prefix[200000];
    cout<<hold<<endl;
    ll temp=199999*pow(3,hold);
    cout<<temp<<endl;
    ll ans=12;


    while(t){

    	ll l,r;
    	cin>>l>>r;

    	if((r-l+1)==2){

    		// 2 ta element

    		if(l==2){

    			// always start as x=2 and y=l+1;
    			ll ans=0;
    			ans+=prefix[l];
    			//cout<<ans<<endl;
    			r*=pow(3LL,ans);
    			//cout<<r<<endl;
    			ans+=prefix[r];
    			cout<<ans<<endl;

    		}
    		else{

    			ll ans=0;
    			ans+=prefix[r];
    			//cout<<"HERE"<<endl;
    			//cout<<ans<<endl;
    			l*=pow(3LL,ans);
    			//cout<<l<<endl;
    			ans+=prefix[l];
    			cout<<ans<<endl;
    		}

    	}
    	else{

    		// 3 ta value

    		if(l==2){

    			// tahole 2 diye start

    			ll ans=0;
    			ans+=prefix[l];
    			//cout<<ans<<endl;
    			ll hold=3*pow(3LL,ans);
    			//cout<<hold<<endl;
    			ans+=prefix[hold];
    			//cout<<ans<<endl;
    			ans+=prefixsum[r]-prefixsum[l+1];
    			cout<<ans<<endl;

    		}
    		else{

    			ll ans=0;
    			ans+=prefix[l+1];
    			//cout<<ans<<endl;
    			ll hold=l*pow(3ll,ans);
    			//cout<<hold<<endl;
    			ans+=prefix[hold];
    			//cout<<ans<<endl;
    			ans+=prefixsum[r]-prefixsum[l+1];
    			cout<<ans<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}