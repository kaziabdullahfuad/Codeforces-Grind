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
bool check(vector<ll> v1,ll mid){

	ll n=v1.size();

	for(int i=0;i<n;i++){

		v1[i]%=mid;
	}

	ll low=0,high=n-1;

	while(low<high){

		if(v1[low]!=v1[high]){
			return false;
		}

		low++;
		high--;
	}

	return true;
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
    	
    	set<ll> s1;
    	ll max_val=-1;
    	for(int i=0;i<n;i++){

    		s1.insert(v1[i]);
    		max_val=max(max_val,v1[i]);
    	}

    	if(s1.size()==1){

    		cout<<0<<endl;
    	}
    	else{

    		ll low=1;
    		ll high=max_val;
    		cout<<low<<" "<<high<<endl;
    		ll ans=1;
    		while(low<=high){

    			//ll mid=low+(high-low)/2;
    			ll mid=(low+high)/2;
    			debug(mid)
    			if(check(v1,mid)){

    				// need to find maximum so low barabo
    				ans=max(ans,mid);
    				low=mid+1;
    			}
    			else{
    				// niche ase ki na dekhbo

    				high=mid-1;
    			}

    		}

    		printVector(v1);

    		for(int i=0;i<n;i++){
    			// cout<<v1[i]%999999900<<" ";
    			//cout<<v1[i]%ans<<" ";
    			cout<<v1[i]%6<<" ";
    		}
    		cout<<endl;
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}