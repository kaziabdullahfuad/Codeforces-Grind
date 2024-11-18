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

    ll n;
    cin>>n;

    ll dot=0,times=0;
    ll ans=0;

    if(n%2==1){

    	dot=1;
    	for(ll i=1;i<=n;i+=2){

    		dot++;
    		times++;
    	}

    	ans=2*dot*times;
    	cout<<ans<<endl;
    }
    else{

    	dot=1;
    	times=1;

    	for(ll i=2;i<=n;i+=2){
    		dot++;
    		times++;
    	}

    	ans=dot*times;
    	cout<<ans<<endl;
    }

    return 0;
}