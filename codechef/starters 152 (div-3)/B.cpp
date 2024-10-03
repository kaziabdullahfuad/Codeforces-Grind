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
    	
    	if(n==3){
    		cout<<0<<endl;
    	}
    	else{

    		sort(all(v1));

    		//printVector(v1);

    		//cout<<v1[n-2-1]-v1[0]<<endl;
    		// vul answer dao really have to check all 5 possible combinations
    		ll ans=v1[n-1]-v1[0]; // 0 removed
    		ans=min(ans,v1[n-1]-v1[1]); // 1 removed v1[0]
    		ans=min(ans,v1[n-1]-v1[2]); // 2 removed v1[0] and v1[1]
    		ans=min(ans,v1[n-2]-v1[0]); // 1 removed v1[n-1]
    		ans=min(ans,v1[n-2]-v1[1]); // 2 removed v1[n-1] and v1[0]
    		ans=min(ans,v1[n-3]-v1[0]); // 2 removed v1[n-1] and v1[n-2]

    		cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}