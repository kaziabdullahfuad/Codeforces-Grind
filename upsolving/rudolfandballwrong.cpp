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

    	set<ll> s1;
    	s1.insert(x);
    	int count=1;

    	for(int i=0;i<m;i++){
    		ll dis;
    		cin>>dis;
    		char s;
    		cin>>s;
    		debug(count)
    		if(s=='0'){
    			// clock wise
    			// set a go through koro then calculate value and delete
    			for(auto x:s1){

    				ll dist=x;
    				s1.erase(dist);
    				ll clock_dist=(dist+dis);
    				if(clock_dist==n){
    					s1.insert(n);
    				}
    				else{
    					s1.insert(clock_dist%n);
    				}
    			}
    		}
    		else if(s=='1'){
    			// anti clock wise

    			// clock wise
    			// set a go through koro then calculate value and delete
    			for(auto x:s1){

    				ll dist=x;
    				s1.erase(dist);
    				ll anticlock_dist;

    				if(dis>=x){
    					anticlock_dist=n-(dis-(x%n));
    				}
    				else{
    					anticlock_dist=x-dis;
    				}
    				s1.insert(anticlock_dist);
    				
    			}
    		}
    		else{

    			for(auto x:s1){

    				ll dist=x;
    				s1.erase(dist);
    				ll anticlock_dist;
    				debug(dist) 
    				debug(dis) 
    				if(dis>=x){
    					anticlock_dist=n-(dis-(x%n));
    				}
    				else{
    					anticlock_dist=x-dis;
    				}
    				debug(anticlock_dist)
    				s1.insert(anticlock_dist);

    				ll clock_dist=(x+dis);
    				debug(clock_dist)
    				if(clock_dist==n){
    					s1.insert(n);
    				}
    				else{
    					clock_dist=clock_dist%n;
    					debug(clock_dist)
    					s1.insert(clock_dist);
    				}
    				
    			}

    		}

    		for(auto x:s1){
    			cout<<x<<" ";
    		}
    		cout<<endl;
    		count++;
    	}

    	for(auto x:s1){
    		cout<<x<<" ";
    	}

    	t--;
    }

    return 0;
}