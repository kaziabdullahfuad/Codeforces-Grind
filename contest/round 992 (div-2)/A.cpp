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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	bool found=false;
    	bool main_found=false;
    	ll ans=-1;
    	for(int i=0;i<n;i++){

    		found=true;
    		ll val=v1[i];
    		//debug(val)
    		for(int j=0;j<n;j++){

    			if(j==i){
    				continue;
    			}
    			ll hold=abs(val-v1[j]);
    			//debug(hold)
    			if(hold%k==0){

    				
    				found=false;
    				break;
    			}
    		}
    		//debug(found)
    		if(found){
    			ans=i+1;
    			main_found=true;
    			break;
    		}
    	}

    	//debug(ans)
    	if(main_found){
    		cout<<"YES"<<endl;
    		cout<<ans<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}