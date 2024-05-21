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
bool okay(ll val,ll k,vector<ll> &v1){

	ll take=0;
	ll n=v1.size();

	for(int i=0;i<n;i++){

		if(v1[i]<val){
			take+=val-v1[i];
		}

		if(take>k){
			//cout<<take<<endl;
			return false;
		}
	}

	if(take>k){
		return false;
	}
	else{
		return true;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,k;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll low=0,high=1e18,mid=0;
    	//cout<<low+(high-low)/2<<endl;
    	ll min_val=0;

    	while(low<=high){

    		mid=(low+high)/2;
    		//cout<<mid<<endl;
    		if(okay(mid,k,v1)){
    			//cout<<mid<<endl;
    			min_val=mid;
    			low=mid+1;
    		}
    		else{
    			high=mid-1;
    		}
    	}

    	cout<<min_val<<endl;

    	t--;
    }

    return 0;
}