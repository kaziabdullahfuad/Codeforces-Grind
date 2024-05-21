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
bool check(ll mid,vector<ll> v1){
	
	ll n=v1.size();

	for(int i=n-1;i>=1;i--){

		if(v1[i]>mid){

			v1[i-1]+=(v1[i]-mid);
			v1[i]=mid;
		}
	}

	ll max_val=*max_element(all(v1));

	if(max_val<=mid){
		return true;
	}
	else{
		return false;
	}
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
    	//printVector(v1);

    	ll low=0,high=1e9;
    	ll ans=1e9;
    	ll mid=0;

    	//cout<<check(5,v1)<<endl;

    	while(low<=high){

    		mid=(low+high)/2;

    		if(check(mid,v1)){
    			ans=mid;
    			// ar theke kome ki hoi ki na
    			high=mid-1;
    		}
    		else{
    			low=mid+1;
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}