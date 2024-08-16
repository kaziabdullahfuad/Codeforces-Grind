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
    	
    	// jodi puratar gcd 1 na hoi tahole impossible

    	ll first_gcd=0;

    	for(int i=0;i<n;i++){
    		first_gcd=__gcd(first_gcd,v1[i]);
    	}

    	if(first_gcd==1){

    		//cout<<__gcd(49,25)<<endl;
    		//cout<<__gcd(49,18)<<endl;
    		
    		
    		//printVector(v1);

    		map<ll,ll> m1;

    		for(int i=0;i<n;i++){

    			m1[v1[i]]=i+1;
    		}
    		vector<pair<ll,ll>> holder;
    		for(auto x:m1){

    			//cout<<x.first<<" "<<x.second<<endl;
    			holder.push_back(make_pair(x.first,x.second));
    		}
    		ll max_val=-1;
    		//cout<<"HERE"<<endl;
    		//cout<<holder.size()<<endl;
    		for(int i=0;i<holder.size();i++){
    			
    			for(int j=i;j<holder.size();j++){

    				//cout<<holder[i].first<<" "<<holder[j].first<<endl;
    				if(__gcd(holder[i].first,holder[j].first)==1){

    					max_val=max(max_val,holder[i].second+holder[j].second);
    				}
    			}
    			//cout<<endl;
    		}

    		cout<<max_val<<endl;

    	}
    	else{

    		cout<<-1<<endl;
    	}

    	t--;
    }

    return 0;
}