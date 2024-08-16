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
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}
    	
    	ll ans=1;
    	ll count=1;
    	map<ll,ll> m1;
    	ll val=v1[0];
    	for(int i=0;i<n;i++){

    		if(v1[i]!=val){
    			val=v1[i];
    			count=1;
    			i--;
    		}
    		else{
    			if(count>m1[v1[i]]){
    				m1[v1[i]]=count;
    			}
    			count++;
    		}
    	}

    	

    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	ans=1;
    	count=1;
    	map<ll,ll> m2;
    	val=v2[0];
    	for(int i=0;i<n;i++){

    		if(v2[i]!=val){
    			val=v2[i];
    			count=1;
    			i--;
    		}
    		else{
    			if(count>m2[v2[i]]){
    				m2[v2[i]]=count;
    			}
    			count++;
    		}
    	}


    	// for(auto x:m2){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	ans=1;

    	for(auto x:m1){

    		//cout<<x.first<<" "<<x.second<<endl;
    		//cout<<m2[x.first]<<endl;
    		ans=max(ans,x.second+m2[x.first]);
    	}

    	for(auto x:m2){

    		//cout<<x.first<<" "<<x.second<<endl;
    		//cout<<m2[x.first]<<endl;
    		ans=max(ans,x.second+m1[x.first]);
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}