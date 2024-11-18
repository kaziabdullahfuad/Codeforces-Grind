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

    ll n;
    cin>>n;
    vector<ll> v1(n);
    
    // first map to keep the values
    map<ll,ll> m1;
    ll sum=0;
    // second map to see how many times it's available
    map<ll,vector<ll>> m2;
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    	sum+=v1[i];
    	m1[v1[i]]++;
    	m2[v1[i]].push_back(i+1);
    }
    
    set<ll> s1;
   // debug(sum)
    ll count=0;
    for(auto x:m1){

    	//cout<<x.first<<" "<<x.second<<endl;
    	ll hold=sum-(2ll*x.first);
    	//cout<<x.first<<endl;
    	//debug(hold)
    	if(m2[hold].size()>=1){

    		ll temp=m2[hold].size();
    		if(hold==x.first){
    			if(((temp*temp-1)/2)>=1){
	    			count+=m2[hold].size();
	    			s1.insert(hold);
	    			//cout<<"YES"<<endl;
    			}
    		}
    		else{

    			count+=m2[hold].size();
	    		s1.insert(hold);
    		}
    		
    		
    	}
    	

    }

    //debug(count)
   	
   	if(count==0){

   		cout<<0<<endl;
   		cout<<endl;
   	}
   	else{

   		cout<<count<<endl;
   		for(auto x:m2){

   			if(s1.find(x.first)!=s1.end()){

   				for(auto y:x.second){

   					cout<<y<<" ";
   				}
   			}
   		}

   		cout<<endl;
   	}

    return 0;
}