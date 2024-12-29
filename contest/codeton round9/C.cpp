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

    	ll x,m;
    	cin>>x>>m;

    	ll hold=(2ll*x);

    	ll ans=0;
    	//cout<<min(m,hold)<<endl;
    	//debug(x)
    	for(int i=1;i<=min(m,hold);i++){

    		ll temp=(i^x);
    		//debug(temp)
    		if(i==x){
    			continue;
    		}
    		else if(x%temp==0 || i%temp==0){
    			ans++;
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}