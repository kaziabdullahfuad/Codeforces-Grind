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

    	vector<pair<ll,ll>> v2;
    	ll temp=n;
    	while(n){

    		
    		ll len;
    		cin>>len;
    		vector<ll> v1(len);

    		for(int i=0;i<len;i++){
    			cin>>v1[i];
    		}

    		//printVector(v1);

    		ll start=v1[0]+1;
    		ll hold=start+1;

    		// debug(start)
    		// debug(hold)
    		// cout<<"HERE"<<endl;
    		for(int i=1;i<len;i++){

    			// debug(i)
    			// debug(v1[i])
    			// debug(hold)
    			if(hold>v1[i]){
    				hold++;
    			}
    			else{

    				// choto pawa gese
    				start=(v1[i]+1-i);
    				hold=v1[i]+2;

    			}
    			// //cout<<"AFTER CHANGE"<<endl;
    			// debug(start)
    			// debug(hold)

    		}

    		v2.push_back({start,len});

    		// debug(start)
    		// debug(hold)

    		// if(n==temp){
    		// 	break;
    		// }
    		n--;
    	}

    	ll len=v2.size();

    	// for(int i=0;i<len;i++){

    	// 	cout<<v2[i].first<<" "<<v2[i].second<<endl;
    	// }

    	sort(all(v2));
    	//cout<<"HERE"<<endl;
    	// for(int i=0;i<len;i++){

    	// 	cout<<v2[i].first<<" "<<v2[i].second<<endl;
    	// }

    	ll ans=v2[0].first;
    	ll hold=v2[0].first+v2[0].second;
    	//cout<<"HERE"<<endl;
    	ll prev=v2[0].second;
    	for(int i=1;i<len;i++){

    		// debug(ans)
    		// debug(hold)
    		// debug(i)
    		// debug(v2[i].first)
    		// debug(prev)
    		if(hold>=v2[i].first){
    			
    			hold+=v2[i].second;
    		}
    		else{
    			ans=v2[i].first-prev;
    			hold=v2[i].first+v2[i].second;
    		}

    		prev+=v2[i].second;
    	}

    	cout<<ans<<endl;


    	t--;
    }

    return 0;
}