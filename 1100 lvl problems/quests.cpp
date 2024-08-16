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
    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	ll sum=0;
    	ll count=1;
    	ll max_val=-1e9;
    	ll ans=-1e9;
    	//debug(k)
    	for(int i=0;i<n;i++){

    		sum+=v1[i];
    		max_val=max(max_val,v2[i]);
    		
    		if(k-count>=0){

    			ll remain=(k-count)*max_val;
    			//cout<<sum<<" "<<remain<<" "<<sum+remain<<endl;
    			ans=max(ans,sum+remain);
    		}
    		else{
    			break;
    		}
    		//debug(ans);
    		count++;
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}