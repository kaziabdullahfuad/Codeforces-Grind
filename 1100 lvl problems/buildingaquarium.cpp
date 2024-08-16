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
bool check(vector<ll> &v1,ll mid,ll x){

	ll sum=0;

	for(int i=0;i<v1.size();i++){

		if(v1[i]<mid){

			sum+=mid-v1[i];
		}

		if(sum>x){
			return false;
		}
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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1));

    	ll low=0;
    	ll high=1e10;
    	ll ans=1;

    	while(low<=high){

    		ll mid=(low+high)/2;

    		if(check(v1,mid,x)){

    			// jodi hoi then aro boro korbo
    			// since find max
    			ans=mid;
    			low=mid+1;

    		}
    		else{

    			high=mid-1;
    		}
    	}
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}