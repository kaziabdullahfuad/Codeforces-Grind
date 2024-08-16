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
    	
    	ll max_val=v1[0];

    	for(int i=0;i<n;i++){
    		max_val=max(v1[i],max_val);
    	}

    	ll hold=v1[n-1];
    	if(hold==max_val){

    		// second min val bair koro

    		hold=v1[0];

    		for(int i=n-2;i>=0;i--){
    			hold=max(hold,v1[i]);
    		}
    	}
    	//cout<<hold<<endl;
    	ll ans=hold+max_val;

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}