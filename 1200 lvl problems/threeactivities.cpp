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
void printVector(vector<t1> &v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
void printpairVector(vector<pair<ll,ll>> &v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i].first<<" "<<v1[i].second<<endl;
	}
	//cout<<endl;
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
    	vector<pair<ll,ll>> v1;
    	vector<pair<ll,ll>> v2;
    	vector<pair<ll,ll>> v3;
    	
    	for(int i=0;i<n;i++){
    		ll val;
    		cin>>val;

    		v1.push_back({val,i+1});
    	}

    	for(int i=0;i<n;i++){
    		ll val;
    		cin>>val;

    		v2.push_back({val,i+1});
    	}

    	for(int i=0;i<n;i++){
    		ll val;
    		cin>>val;

    		v3.push_back({val,i+1});
    	}
    	
    	//printpairVector(v1);

    	sort(all(v1),greater<pair<ll,ll>>());
    	sort(all(v2),greater<pair<ll,ll>>());
    	sort(all(v3),greater<pair<ll,ll>>());

    	//printpairVector(v1);
    	// printpairVector(v2);
    	// printpairVector(v3);

    	//cout<<endl;
    	ll max_val=0;
    	for(int i=1;i<=3;i++){
    		ll sum=0;
    		ll first_date;
    		//debug(i)
    		if(i==1){
    			sum+=v1[0].first;
    			first_date=v1[0].second;
    		}
    		else if(i==2){

    			sum+=v2[0].first;
    			first_date=v2[0].second;
    		}
    		else{

    			sum+=v3[0].first;
    			first_date=v3[0].second;
    		}
    		//debug(sum)
    		for(int j=1;j<=3;j++){
    			ll second_date;
    			if(j==i){
    				continue;
    			}
    			if(j==1){

    				// 1 explore
    				for(int l=0;l<n;l++){

    					if(v1[l].second!=first_date){
    						//debug(sum)
    						//debug(v2[l].first)
    						second_date=v1[l].second;
    						sum+=v1[l].first;
    						break;
    					}
    				}
    				
    				
    			}
    			else if(j==2){

    				// 2 explore
    				
    				for(int l=0;l<n;l++){

    					if(v2[l].second!=first_date){
    						//debug(sum)
    						//debug(v2[l].first)
    						second_date=v2[l].second;
    						sum+=v2[l].first;
    						break;
    					}
    				}
    			}
    			else{

    				//debug(i)
    				//debug(j)
    				for(int l=0;l<n;l++){

    					if(v3[l].second!=first_date){
    						//debug(sum)
    						//debug(v2[l].first)
    						second_date=v3[l].second;
    						sum+=v3[l].first;
    						break;
    					}
    				}
    			}
    			// cout<<"EKHANE SUM"<<endl;
    			// debug(sum)
    			for(int k=1;k<=3;k++){

    				if(k!=i && k!=j){

    					//cout<<i<<" "<<j<<" "<<k<<endl;
    					if(k==1){

    						for(int l=0;l<n;l++){

    							if(v1[l].second!=first_date
    								&& v1[l].second!=second_date){

    								//debug(sum)
    								sum+=v1[l].first;
    								//cout<<"HERE"<<endl;
    								//cout<<first_date<<" "<<second_date<<endl;
    								//debug(v3[l].first)
    								//debug(v3[l].second)
    								//cout<<i<<" "<<j<<" "<<k<<endl;
    								//debug(v1[l].first)
    								//debug(sum)
    								max_val=max(max_val,sum);
    								if(i==2){
    									sum=v2[0].first;
    								}
    								else{
    									sum=v3[0].first;
    								}
    								break;
    							}
    						}
    					}
    					else if(k==2){

    						for(int l=0;l<n;l++){

    							if(v2[l].second!=first_date
    								&& v2[l].second!=second_date){

    								//debug(sum)
    								sum+=v2[l].first;
    								//cout<<"HERE"<<endl;
    								//cout<<first_date<<" "<<second_date<<endl;
    								//debug(v3[l].first)
    								//debug(v3[l].second)
    								//cout<<i<<" "<<j<<" "<<k<<endl;
    								//debug(sum)
    								max_val=max(max_val,sum);
    								if(i==1){
    									sum=v1[0].first;
    								}
    								else{
    									sum=v3[0].first;
    								}
    								break;
    							}
    						}
    					}
    					else{
    						// debug(i)
    						// debug(j)
    						// debug(k)
    						// debug(sum)
    						for(int l=0;l<n;l++){

    							if(v3[l].second!=first_date
    								&& v3[l].second!=second_date){

    								//debug(sum)
    								sum+=v3[l].first;
    								//cout<<"HERE"<<endl;
    								//cout<<first_date<<" "<<second_date<<endl;
    								//debug(v3[l].first)
    								//debug(v3[l].second)
    								//cout<<i<<" "<<j<<" "<<k<<endl;
    								//debug(sum)
    								max_val=max(max_val,sum);
    								// i=1 or j=2
    								// i=2 and j=1
    								if(i==1){
    									sum=v1[0].first;
    								}
    								else{
    									sum=v2[0].first;
    								}
    								break;
    							}
    						}
    					}
    				}
    			}
    			//cout<<endl;
    		}
    		//cout<<endl;
    	}

    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}