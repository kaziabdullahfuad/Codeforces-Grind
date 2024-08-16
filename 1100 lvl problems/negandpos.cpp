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
    	
    	ll sum=0;
    	ll neg=0;
    	ll min_val=abs(v1[0]);
    	for(int i=0;i<n;i++){
    		sum+=abs(v1[i]);
    		ll hold=abs(v1[i]);
    		min_val=min(min_val,hold);
    		if(v1[i]<0){
    			neg++;
    		}
    	}

    	if(neg%2==0){
    		cout<<sum<<endl;
    	}
    	else{
    		//cout<<sum<<" "<<min_val<<endl;

    		ll ans=sum-(2*min_val);
    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}