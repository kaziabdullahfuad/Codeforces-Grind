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
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
bool possible(ll mid,vector<pair<ll,ll>> &v1){

	ll left=0;
	ll right=0;
	for(int i=0;i<v1.size();i++){

		left-=mid;
		right+=mid;

		left=max(v1[i].first,left);
		right=min(v1[i].second,right);

		if(left>right){
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

    	ll n;
    	cin>>n;
    	vector<pair<ll,ll>> v1(n);
    	
    	for(ll i=0;i<n;i++){

    		cin>>v1[i].first;
    		cin>>v1[i].second;
    	}

    	//bool found=false;

    	// for(auto x:v1){
    	// 	//cout<<x.first<<" "<<x.second<<" ";
    	// 	if(x.first!=0 && x.second!=0){
    	// 		found=true;
    	// 		break;
    	// 	}
    	// }
    	//cout<<found<<endl;
    	//cout<<endl;
    	// binary search
    	ll low=0;
    	ll high=1e9;
    	ll mid;
    	ll ans;
    	while(low<=high){

    		mid=low+(high-low)/2;
    		//cout<<low<<" "<<mid<<" "<<high<<endl;
    		if(possible(mid,v1)){
    			// it means we can lower the mid value
    			// so low statys low
    			// high becomes mid

    			high=mid-1;
    			ans=mid;
    		}
    		else{
    			// it means value needs to be increased
    			// so low becomes mid
    			// high stays high
    			low=mid+1;
    		}
    	}
    	//cout<<low<<" "<<high<<endl;
    	//cout<<mid<<endl;

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}