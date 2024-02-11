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
    	ll lua_sum=0;
    	ll date_sum=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];

    		if(i%2==0){
    			lua_sum+=v1[i];
    		}
    		else{
    			date_sum+=v1[i];
    		}
    	}
    	//cout<<"HERE"<<endl;
    	//cout<<lua_sum<<" "<<date_sum<<endl;

    	if(lua_sum==date_sum){
    		cout<<"YES"<<endl;
    	}
    	else{

    		ll diff_sum=abs(lua_sum-date_sum);
    		//cout<<diff_sum<<endl;
    		bool found=false;
    		for(int i=0;i<n;i++){

    			if(v1[i]==diff_sum){
    				//cout<<i<<endl;
    				//cout<<v1[i]<<endl;
    				found=true;
    				break;
    			}
    		}

    		if(found){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}



    	t--;
    }

    return 0;
}