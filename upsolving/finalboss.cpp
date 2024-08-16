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
bool check(vector<ll> &v1,vector<ll> &v2,ll mid,ll h){

	ll sum=0;
	ll n=v1.size();

	for(ll i=0;i<n;i++){

		ll hold=(mid-1)/v2[i];
		hold++;
		sum+=(hold*v1[i]);
		// sum+=(1+(mid-1)/v2[i])*v1[i];

		if(sum>=h){
			return true;
		}
	}
	//debug(sum)

	if(sum>=h){
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

    	ll h,n;
    	cin>>h>>n;
    	
    	//debug(h)
    	vector<ll> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	ll low=1;
    	ll high=1e12;
    	ll ans=1e12;
    	while(low<=high){

    		ll mid=(low+high)/2ll;

    		if(check(v1,v2,mid,h)){
    			// minimize korbo so aro choto khujbo
    			//debug(mid)
    			//ans=min(ans,mid);
    			ans=min(ans,mid);
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