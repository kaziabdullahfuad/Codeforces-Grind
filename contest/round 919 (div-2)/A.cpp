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

    	// 1 maximum >=k
    	// 2 maximum <=k
    	// 3 skip
    	ll max_one=-1e18;
    	ll max_two=-1e18;
    	ll min_val=1e18;
    	vector<ll> holder;
    	for(ll i=1;i<=n;i++){

    		ll a,x;
    		cin>>a>>x;

    		if(a==1){

    			if(x>max_one){
    				max_one=x;
    			}
    		}
    		else if(a==2){

    			if(x>max_two){
    				max_two=x;
    			}

    			if(x<min_val){
    				min_val=x;
    			}
    		}
    		else{
    			holder.push_back(x);

    		}
    	}

    	if(max_one>max_two || min_val<max_one){

    		cout<<0<<endl;
    	}
    	else{
    		//cout<<max_two<<endl;
    		//cout<<max_one<<endl;
    		ll ans=(min_val-max_one)+1;
    		//cout<<ans<<endl;

    		for(ll i=0;i<holder.size();i++){

    			if(holder[i]>=max_one && holder[i]<=min_val){
    				ans--;
    			}
    		}
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}