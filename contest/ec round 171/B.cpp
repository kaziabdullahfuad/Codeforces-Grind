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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1){

    		cout<<1<<endl;
    	}
    	else if(n==2){

    		cout<<v1[1]-v1[0]<<endl;
    	}
    	else if(n%2==0){

    		vector<ll> dif;

    		for(int i=1;i<n;i+=2){

    			ll hold=v1[i]-v1[i-1];
    			dif.push_back(hold);
    		}

    		ll max_val=*max_element(all(dif));
    		//printVector(dif);
    		cout<<max_val<<endl;

    	}
    	else{

    		ll ans=2e18;
    		for(int i=0;i<n;i++){

    			vector<ll> hold;
    			//debug(i)
    			for(int j=0;j<n;j++){

    				if(j==i){
    					continue;
    				}

    				hold.push_back(v1[j]);
    			}
    			//printVector(hold);
    			ll min_val=-1e18;
    			ll len=hold.size();
    			for(int k=1;k<len;k+=2){

    				ll temp=hold[k]-hold[k-1];
    				//debug(temp)
    				min_val=max(min_val,temp);
    			}
    			
    			//debug(min_val)
    			ans=min(ans,min_val);
    		}

    		cout<<ans<<endl;

    	}

    	t--;
    }

    return 0;
}