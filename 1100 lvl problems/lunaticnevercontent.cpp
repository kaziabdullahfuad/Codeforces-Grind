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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	set<ll> s1;
    	ll max_val=-1;
    	for(int i=0;i<n;i++){

    		s1.insert(v1[i]);
    		max_val=max(max_val,v1[i]);
    	}

    	if(s1.size()==1){

    		cout<<0<<endl;
    	}
    	else{

    		ll left=0,right=n-1;

    		ll ans=0;

    		while(left<right){

    			ll diff=abs(v1[left]-v1[right]);
    			
    			ans=__gcd(ans,diff);
    			//cout<<diff<<" "<<ans<<endl;
    			left++;
    			right--;
    		}

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}