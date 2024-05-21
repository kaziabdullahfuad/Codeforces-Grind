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

    	ll a,b;
    	cin>>a>>b;
    	ll min_val=1e18;
    	for(ll i=0;i<=32;i++){

    		if(b+i==1){
    			// maane 0+1=1 hoise
    			continue;
    		}

    		ll holder=a;
    		ll ans=0;
    		while(holder){

    			ans++;
    			holder=holder/(b+i);
    		}
    		//debug(ans)
    		min_val=min(min_val,ans+i);
    	}
    	cout<<min_val<<endl;

    	t--;
    }

    return 0;
}