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
    	map<ll,ll> m1;
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    		m1[v1[i]]=i;
    	}

    	// for(auto x:v1){
    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;

    	ll min_val=1e18;
    	for(auto x:m1){
    		//cout<<x.first<<" "<<x.second<<endl;

    		if(x.first!=x.second){
    			//cout<<abs(x.first-x.second)<<endl;
    			min_val=min(min_val,abs(x.first-x.second));
    		}
    	}

    	if(min_val==1e18){
    		cout<<1<<endl;
    	}
    	else{
    		//cout<<min_val<<endl;
    		bool found=true;
    		//cout<<"START"<<endl;
    		for(auto x:m1){
    			//debug(x.first)
    			if(x.first!=x.second){
    				//cout<<x.first<<endl;
    				//debug(x.first)
    				ll dist=abs(x.second-x.first);
    				if(dist%min_val==1){
    					//debug(x.first) debug(x.second)
    					found=false;
    					break;
    				}
    				else{
    					//cout<<abs(x.second-min_val)<<endl;
    					//cout<<x.first<<endl;
    				}
    			}
    		}
    		if(found){
    			cout<<min_val<<endl;
    		}
    		else{
    			cout<<1<<endl;
    		}
    	}
    	


    	t--;
    }

    return 0;
}