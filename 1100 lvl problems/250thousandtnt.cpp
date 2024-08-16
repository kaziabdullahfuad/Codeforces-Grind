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
    	
    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		// find all the divisors
    		// and proti divisors ar hisabe dekho highest pawa jai ki na

    		vector<ll> divisors;

    		for(int i=1;i*i<=n;i++){

    			if(n%i==0){

    				divisors.push_back(i);

    				if((n/i)!=i){
    					divisors.push_back(n/i);
    				}
    			}
    		}

    		sort(all(divisors));
    		//printVector(v1);
    		//printVector(divisors);

    		// iterate through all the divisors
    		ll len=divisors.size();
    		ll max_val=-1;
    		ll min_val=1e18;
    		ll diff=-1;
    		for(int i=0;i<len-1;i++){

    			ll val=divisors[i];
    			//debug(val)
    			for(int j=0;j<n;j++){

    				int k=j;
    				ll sum=0;
    				for(;k<j+val;k++){

    					//cout<<k<<" ";
    					sum+=v1[k];
    				}
    				//cout<<endl;

    				//debug(sum)
    				max_val=max(max_val,sum);
    				min_val=min(min_val,sum);
    				j=k-1;
    			}
    			//cout<<val<<endl;
    			//cout<<max_val<<" "<<min_val<<" "<<max_val-min_val<<endl;
    			diff=max(diff,max_val-min_val);
    			max_val=-1;
    		 	min_val=1e18;
    		}

    		cout<<diff<<endl;

    	}

    	t--;
    }

    return 0;
}