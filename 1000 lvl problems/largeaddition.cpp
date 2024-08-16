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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	ll pos=0;
    	ll neg=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		if(v1[i]>=0){
    			pos++;
    		}
    		else{
    			neg++;
    		}
    	}

    	if(neg==0){

    		ll ans=accumulate(all(v1),0);
    		cout<<ans<<endl;
    	}
    	else{


    	vector<ll> prefix(n+1);
    	vector<ll> suffix(n+1);

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i-1];
    	}

    	suffix[n]=v1[n-1];

    	for(int i=n-1;i>=0;i--){

    		suffix[i]=suffix[i+1]+v1[i-1];
    	}

    	// for(int i=1;i<=n;i++){
    	// 	cout<<prefix[i]<<" ";
    	// }
    	// cout<<endl;
    	for(int i=1;i<=n;i++){
    		cout<<suffix[i]<<" ";
    	}
    	ll max_val=abs(prefix[n]);
    	cout<<endl;
    	for(int i=1;i<=n-1;i++){
    		cout<<i<<" "<<i+1<<endl;
    		ll hold=abs(prefix[i])+suffix[i+1];
    		max_val=max(max_val,hold);
    		//cout<<hold<<endl;

    	}

    	cout<<max_val<<endl;

    	}
    	
    	

    	t--;
    }

    return 0;
}