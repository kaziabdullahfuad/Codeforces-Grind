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
ll get_sum(ll l,ll r){

	ll right=(r*(r+1))/2;
	ll left=(l*(l-1))/2;

	return right-left;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,k;
    	cin>>n>>k;

    	ll low=k;
    	ll high=k+n-1;
    	ll answer=LLONG_MAX;

    	while(low<=high){

    		ll mid=(low+high)/2;

    		// x
    		ll sum1=get_sum(k,mid);
    		// y
    		ll sum2=get_sum(mid+1,k+n-1);

    		//cout<<low<<" "<<high<<" "<<mid<<" "<<sum1<<" "<<sum2<<" "<<abs(sum1-sum2)<<endl;

    		if(sum1>sum2){
    			// baam a jabe
    			answer=min(answer,abs(sum1-sum2));
    			high=mid-1;
    		}
    		else if(sum1<sum2){

    			answer=min(answer,abs(sum1-sum2));
    			low=mid+1;
    		}
    		else{
    			answer=0;
    			break;
    		}

    	}

    	cout<<answer<<endl;


    	t--;
    }

    return 0;
}