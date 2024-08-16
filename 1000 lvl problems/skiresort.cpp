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

    	ll n,k,q;
    	cin>>n>>k>>q;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	ll left=0;
    	ll right=0;
    	ll count=0;
    	ll max_sub=0;
    	ll ans=0;
    	while(left<n && right<n){

    		if(v1[right]>q){

    			//cout<<left<<" "<<right<<endl;
    			ll hold=right-left;
    			//debug(hold)
    			if(hold>=k){

    				ll keep=hold-k+1;
    				//debug(keep)
    				ans+=(keep*(keep+1))/2;
    				//debug(ans)
    			}
    			right++;
    			left=right;
    		}
    		else{
    			//cout<<right-left+1<<endl;
    			right++;
    		}
    	}
    	//debug(ans)
    	
    	ll hold=right-left;
    	if(hold>=k){
    		ll keep=hold-k+1;
    		//debug(keep)
    		ans+=(keep*(keep+1))/2;
    		//debug(ans)
    	}
    	

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}