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

    vector<ll> prefix(2e5+1);
    vector<ll> prefixsum(2e5+1);

    for(ll i=0;i<=2e5;i++){

    	

		ll temp=i;
		ll count=0;
		while(temp){

			temp/=3;
			count++;
		}
		
		prefix[i]=count;
    	
    }

    

    for(int i=1;i<=2e5;i++){

    	prefixsum[i]=prefixsum[i-1]+prefix[i];
    }

  	


    while(t){

    	ll l,r;
    	cin>>l>>r;

    	ll ans=0;
    	ans+=prefix[l];
    	//cout<<ans<<endl;
    	ans+=ans;
    	//cout<<ans<<endl;

    	ans+=prefixsum[r]-prefixsum[l];

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}