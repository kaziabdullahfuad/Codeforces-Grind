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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1));

    	ll sum=accumulate(all(v1),0ll);

    	// suffix pos=n-k+1
    	vector<ll> prefix(n+1,0);
    	//printVector(v1);
    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i-1];
    	}

    	//printVector(prefix);
    	vector<ll> suffix(n+1);
    	suffix[n]=v1[n-1];

    	for(int i=n-1;i>=1;i--){

    		suffix[i]=suffix[i+1]+v1[i-1];
    	}

    	//printVector(suffix);

    	ll ans=max(sum-prefix[k*2],sum-suffix[n-k+1]);
    	//cout<<ans<<endl;
    	ll right=n-k+1;
    	// cout<<right<<endl;
    	// cout<<sum<<endl;
    	// cout<<"STARTS"<<endl;
    	for(int i=0;i<n;i+=2){

    		ll holder=0;

    		if(i==0){
    			ans=max(ans,sum-suffix[right]);
    		}
    		else if(right<=n){
    			//cout<<"HERE"<<" ";
    			holder=sum-prefix[i]-suffix[right];
    			ans=max(ans,holder);
    		}
    		else{
    			ans=max(ans,sum-prefix[i]);
    		}

    		//cout<<i<<" "<<right<<" "<<holder<<" "<<ans<<endl;
    		if((i/2)==k){
    			break;
    		}
    		right++;

    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}