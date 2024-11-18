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

    	ll b,c,d;
    	cin>>b>>c>>d;
    	//cout<<b<<" "<<c<<" "<<d<<endl;
    	map<tuple<ll,ll,ll>,ll> m1;

    	m1[{0,0,0}]=0;
    	m1[{0,0,1}]=1;
    	m1[{0,1,0}]=0;
    	m1[{0,1,1}]=-1;
    	m1[{1,0,0}]=-1;
    	m1[{1,0,1}]=0;
    	m1[{1,1,0}]=1;
    	m1[{1,1,1}]=0;

    	//cout<<m1[{0,0,0}]<<endl;
    	//cout<<m1[{1,0,0}]<<endl;
    	ll ans=0;
    	for(ll i=60;i>=0;i--){

    		//cout<<i<<endl;
    		//cout<<(1ll<<i)<<endl;
    		// ll x=((1ll<i) & b);
    		// ll y=((1ll<i) & c);
    		// ll z=((1ll<i) & d);
    		ll I = (((1ll << i) & b) != 0);
            ll J = (((1ll << i) & c) != 0); 
            ll K = (((1ll << i) & d) != 0); 

    		//ll hold=m1[{x,y,z}];
    		ll hold=m1[{I,J,K}];

    		if(hold==-1){
    			ans=-1;
    			break;
    		}
    		else{

    			ans+=hold*(1ll<<i);
    			//ans+=(1ll<<i);
    			//debug(ans)
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}