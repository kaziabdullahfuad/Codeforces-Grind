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

    	//vector<ll> v1={3,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,3};
    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	

    	if(n==1){

    		cout<<v1[0]+k<<endl;
    	}
    	else{


    	sort(all(v1));
    	//printVector(v1);
    	ll min_val=0;
    	ll hold=0;
    	ll start=1;
    	for(int i=0;i<n-1;i++){

    		ll dif=(v1[i+1]-v1[i])*(i+1);

    		if(dif>k){

    			// i+1 gular shathe share hobe.
    			 //cout<<dif<<endl;
    			// cout<<k/(i+1)<<endl;
    			hold=k/(i+1);
    			k=k%(i+1);
    			min_val=v1[i]+hold;
    			//debug(min_val)
    			//debug(k)
    			start++;
    			break;
    		}
    		else{

    			v1[i]=v1[i+1];
    			hold=dif;
    			k-=dif;
    			min_val=v1[i];
    			start++;
    		}
    	}

    	// debug(min_val)
    	// debug(k)
    	// debug(start)
    	if(k>=1){
    		min_val+=(k/start);
    		ll remain=k%start;
    		//debug(min_val)
    		//debug(remain)
    		ll ans=min_val+(n-1)*(min_val-1);
    		//debug(ans)

    		for(int i=0;i<n;i++){

    			if(v1[i]<=min_val){
    				v1[i]=min_val;
    			}
    		}
    		//printVector(v1);

    		for(int i=0;i<n;i++){

    			ll diff=v1[i]-min_val;
    			//cout<<diff<<endl;
    			if(diff>=1){
    				ans++;
    			}
    			else{

    				if(remain>=1){
    					remain--;
    					ans++;
    				}
    			}
    		}
    		cout<<ans<<endl;

    	}
    	else{

    	ll ans=min_val+(n-1)*(min_val-1);

    	//cout<<ans<<endl;


    	for(int i=0;i<n;i++){

    		v1[i]-=min_val;

	    		if(v1[i]>=1){
	    			ans++;
	    		}
	    		else{
	    			
	    			if(k>=1){
	    				k--;
	    				ans++;
	    			}
	    		}
	    	}

    		cout<<ans<<endl;
    	}
    }
    	

    	t--;
    }

    return 0;
}