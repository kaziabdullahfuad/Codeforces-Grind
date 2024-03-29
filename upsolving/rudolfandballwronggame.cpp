#include<iostream>
#include<queue>
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

    	queue<ll> q1;
    	q1.push(x);
    	
    	for(int i=0;i<m;i++){

    		ll val;
    		cin>>val;
    		char s;
    		cin>>s;
    		set<ll> s1;

    		if(s=='0'){

    			// clock wise
    			ll len=q1.size();

    			for(int i=0;i<len;i++){

    				ll clockwise_dist=val+q1.front();
    				q1.pop();
    				if(clockwise_dist==n){
    					s1.insert(n);
    				}
    				else{
    					clockwise_dist=clockwise_dist%n;
    					s1.insert(clockwise_dist);
    				}
    			}
    		}
    		else if(s=='1'){

    			ll anticlock_dist=q1.front();
    			q1.pop();

    			if(anticlock_dist>val){
    				s1.insert(anticlock_dist-val);
    			}
    			else{
    				ll dist=n-(val-(anticlock_dist%n));
    				s1.insert(dist);
    			}
    		}
    		else if(s=='?'){

    			ll clockwise_dist=val+q1.front();
    			ll anticlock_dist=q1.front();
				q1.pop();
				if(clockwise_dist==n){
					s1.insert(n);
				}
				else{
					clockwise_dist=clockwise_dist%n;
					s1.insert(clockwise_dist);
				}

				if(anticlock_dist>val){
    				s1.insert(anticlock_dist-val);
    			}
    			else{
    				ll dist=n-(val-(anticlock_dist%n));
    				s1.insert(dist);
    			}

    		}
    		cout<<"EKBAR"<<endl;
    		cout<<s1.size()<<endl;
    		for(auto hold_s:s1){
    			debug(hold_s)
    		}

    		for(auto s_val:s1){

    			q1.push(s_val);
    		}
    		//s1.clear();
    	}

    	while(!q1.empty()){

    		cout<<q1.front()<<" ";
    		q1.pop();
    	}


    	t--;
    }

    return 0;
}