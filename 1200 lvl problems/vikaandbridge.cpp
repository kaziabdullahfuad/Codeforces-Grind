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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	map<ll,vector<ll>> m1;

    	for(int i=0;i<n;i++){

    		m1[v1[i]].push_back(i);

    	}
    	ll min_diff=1e18;
    	for(auto it=m1.begin();it!=m1.end();it++){

    		//debug(it->first)
    		vector<ll> holder;
    		ll last=0;
    		ll max_dis=-1;
    		bool firstanum=false;
    		for(int i=0;i<it->second.size();i++){

    			//cout<<it->second[i]<<" "<<last<<" ";
    			
    			if(it->second[i]==0){
    				// debug(it->second[i])
    				// debug(firstanum)
    				last=it->second[i];
    				firstanum=true;
    				//cout<<endl;
    			}
    			else{
    				ll diff;
    				if(last==0 && firstanum==false){
    					// debug(firstanum)
    					// debug(it->second[i])
    					diff=it->second[i]-last;
    					//debug(diff)
    					//holder.push_back(diff);
    					last=it->second[i];
    				}
    				else{
    					diff=it->second[i]-last-1;
    					last=it->second[i];
    				}
    				
    				//debug(diff)
    				holder.push_back(diff);
    				max_dis=max(max_dis,diff);
    				last=it->second[i];
    			}

    		}
    		max_dis=max(max_dis,n-last-1);
    		//debug(n-last-1);
    		holder.push_back(n-last-1);
    		//debug(max_dis)
    		//cout<<endl;
    		//cout<<"DIFF ar size"<<endl;
    		//printVector(holder);
    		if(max_dis==0){
    			min_diff=0;
    			break;
    		}
    		else if(holder.size()==1){

    			min_diff=min(min_diff,(max_dis)/2ll);
    			//debug(min_diff)
    		}
    		else{

    			
    			ll maxfreq_count=0;
    			ll second_max=-1;
    			//debug(max_dis)
    			for(int i=0;i<holder.size();i++){

    				//debug(holder[i])
    				if(holder[i]==max_dis){
    					maxfreq_count++;
    				}
    				else{
    					
    					second_max=max(second_max,holder[i]);
    				}
    			}
    			//debug(maxfreq_count)
    			//debug(second_max)
    			if(maxfreq_count>=2){
    				second_max=max_dis;
    			}
    			//debug(second_max)
    			ll two_min=max((max_dis)/2ll,second_max);
    			//debug(two_min)
    			min_diff=min(min_diff,two_min);

    		}
    	}

    	cout<<min_diff<<endl;

    	t--;
    }

    return 0;
}