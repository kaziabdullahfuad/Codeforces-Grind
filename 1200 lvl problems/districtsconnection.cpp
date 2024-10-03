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
    	set<ll> s1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		s1.insert(v1[i]);
    	}
    	
    	if(s1.size()==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		vector<pair<ll,ll>> v2;

    		for(int i=0;i<n;i++){

    			v2.push_back(make_pair(v1[i],i+1));
    		}

    		
    		sort(all(v2));
  
    		// for(int i=0;i<n;i++){

    		// 	cout<<v2[i].first<<" "<<v2[i].second<<endl;
    		// }

    		if(v2[0].first!=v2[1].first){

    			// then simply 1 theke shob jaga

    			ll hold=v2[0].second;
    			cout<<"YES"<<endl;
    			
    			for(int i=1;i<n;i++){

    				cout<<hold<<" "<<v2[i].second<<endl;
    			}
    		}
    		else{

    			ll i=0;

    			while(v2[i].first==v2[0].first){
    				i++;
    			}

    			//cout<<i<<endl;
    			ll l=i;
    			ll first=v2[0].second;
    			cout<<"YES"<<endl;
    			for(;i<n;i++){

    				cout<<first<<" "<<v2[i].second<<endl;
    			}

    			i=1;

    			while(v2[i].first==v2[0].first){

    				cout<<v2[i].second<<" "<<v2[l].second<<endl;
    				i++;
    			}
    		}

    	}


    	t--;
    }

    return 0;
}