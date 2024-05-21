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
    	
    	ll left=v1[0]-x;
    	ll right=v1[0]+x;
    	ll ans=0;
    	for(int i=1;i<n;i++){

    		ll l=v1[i]-x;
    		ll r=v1[i]+x;
    		//cout<<left<<" "<<right<<endl;
    		//cout<<l<<" "<<r<<endl;
    		left=max(left,l);
    		right=min(right,r);

    		// taile ghapla ase
    		if(left>right){
    			left=l;
    			right=r;
    			ans++;
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}