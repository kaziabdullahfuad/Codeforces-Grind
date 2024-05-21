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

    	ll x;
    	cin>>x;

    	ll max_val=-1;
    	ll ans=0;
    	for(ll i=1;i<x;i++){
    		//debug(i)
    		//cout<<__gcd(x,i)<<endl;
    		ll holder=__gcd(x,i)+i;
    		if(holder>max_val){
    			max_val=holder;
    			ans=i;
    		}
    	}

    	//cout<<max_val<<endl;
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}