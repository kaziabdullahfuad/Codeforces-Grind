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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	// for(int i=1;i<=n;i++){
    	// 	cout<<v1[i]<<" ";
    	// }
    	//cout<<endl;
    	ll q;
    	cin>>q;

    	for(int i=1;i<=q;i++){

    		ll x,y;
    		cin>>x>>y;
    		ll sum=1e18;
    		ll calculate=0;
    		ll ans=0;

    		if(x<y){
    	
	    		for(int i=x;i<y;i++){

	    			//debug(i);
	    			if(i==1){
	    				ans++;
	    			}
	    			else{

	    				if(abs(v1[i+1]-v1[i])<abs(v1[i-1]-v1[i])){
	    					ans++;
	    				}
	    				else{
	    					ans+=abs(v1[i+1]-v1[i]);
	    				}
	    			}
	    			//debug(ans);
	    		}
	    		//debug(ans);
	    		cout<<ans<<endl;
    	}
    	else{

    		for(int i=x;i>y;i--){

	    			//debug(i);
	    			if(i==n){
	    				ans++;
	    			}
	    			else{
	    				//cout<<abs(v1[i-1]-v1[i])<<endl;
	    				//cout<<abs(v1[i+1]-v1[i])<<endl;
	    				if(abs(v1[i-1]-v1[i])<abs(v1[i+1]-v1[i])){
	    					ans++;
	    				}
	    				else{
	    					ans+=abs(v1[i-1]-v1[i]);
	    				}
	    			}
	    			//debug(ans);
	    		}
	    		//debug(ans);
	    		cout<<ans<<endl;

    	}
    }

    	t--;
    }

    return 0;
}