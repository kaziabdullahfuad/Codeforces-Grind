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

    	ll n,m,k;
    	cin>>n>>m>>k;

    	// n- no of parts
    	// m - no of colors
    	// k- no of parts bob can repaint

    	if(n==1 || m==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    	
    		vector<ll> v1(n);
    		ll counter=1;
    		map<ll,ll>m1;
    		for(int i=0;i<n;i++){
    			
    			v1[i]=counter;
    			m1[v1[i]]++;
    			if(counter>=m){
    				counter=0;
    			}
    			counter++;

    		}

    		//printVector(v1);
    		ll max_val=-1e18;
    		ll holder;
    		for(auto x:m1){
    			//cout<<x.first<<" "<<x.second<<endl;

    			if(x.second>max_val){
    				max_val=max(max_val,x.second);
    				holder=x.first;
    			}
    		}
    		bool found=false;
    		for(auto x:m1){

    			if(x.first==holder){
    				continue;
    			}
    			else{

    				if(x.second>k){
    					found=true;
    					break;
    				}
    				else{
    					k-=x.second;
    					m1[x.first]=0;
    				}
    			}
    		}

    		for(auto x:m1){
    			
    			if(x.first==holder){
    				continue;
    			}
    			else{

    				if(x.second!=0){
    					found=true;
    					break;
    				}
    			}
    			
    		}

    		if(found){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    		
    	}

    	t--;
    }

    return 0;
}