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

    	ll n,x;
    	cin>>n>>x;
    	ll count=0;
    	ll ans=0;
    	for(ll i=1;i<=n && i<=x;i++){

    		for(ll j=1;i*j<=n && i+j<=x;j++){

    			ll c1=x-i-j;
    			ll c2=(n-i*j)/(i+j);
    			ans+=min(c1,c2);
    			cout<<i<<" "<<j<<" "<<c1<<" "<<c2<<endl;
    			cout<<min(c1,c2)<<endl;
    			//cout<<ans<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}