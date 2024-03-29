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

    	ll n,m,x;
    	cin>>n>>m>>x;
    	set<ll> ans;
    	ans.insert(x);

    	for(int i=0;i<m;i++){

    		ll val;
    		cin>>val;
    		char s;
    		cin>>s;

    		if(s=='0'){

    			// clockwise
    			set<ll> temp;

    			for(auto x:ans){

    				ll holder=x+val;

    				if(holder>n){
    					holder-=n;
    					temp.insert(holder);
    				}
    				else{
    					temp.insert(holder);
    				}
    			}

    			ans=temp;
    		}
    		else if(s=='1'){

    			set<ll> temp;

    			for(auto x:ans){

    				ll holder=x-val;

    				if(holder<=0){
    					holder+=n;
    					temp.insert(holder);
    				}
    				else{
    					temp.insert(holder);
    				}
    			}

    			ans=temp;
    		}
    		else if(s=='?'){

    			set<ll> temp;

    			for(auto x:ans){

    				ll holder=x-val;

    				if(holder<=0){
    					holder+=n;
    					temp.insert(holder);
    				}
    				else{
    					temp.insert(holder);
    				}

    				holder=x+val;

    				if(holder>n){
    					holder-=n;
    					temp.insert(holder);
    				}
    				else{
    					temp.insert(holder);
    				}
    			}
    			ans=temp;

    		}
    	}

    	cout<<ans.size()<<endl;
    	for(auto x:ans){
    		cout<<x<<" ";
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}