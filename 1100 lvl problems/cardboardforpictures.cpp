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
bool check(vector<ll> &v1,ll mid,ll c,ll &temp){

	ll sum=0;
	for(int i=0;i<v1.size();i++){

		sum+=(v1[i]+(2*mid))*(v1[i]+(2*mid));
		if(sum>c){
			temp=sum;
			return false;
		}
	}

	if(sum==c){
		return true;
	}
	else{
		temp=sum;
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

    	ll n,c;
    	cin>>n>>c;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll low=1;
    	ll high=1e9;
    	ll ans=1;
    	while(low<=high){

    		//ll mid=low+(high-low)/2;
    		ll mid=(low+high)/2;
    		ll temp=0;
    		if(check(v1,mid,c,temp)){
    			// find korte hobe 
    			ans=mid;
    			break;
    		}
    		else{

    			if(temp>c){
    				// value komao
    				high=mid-1;
    			}
    			else{
    				low=mid+1;
    			}
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}