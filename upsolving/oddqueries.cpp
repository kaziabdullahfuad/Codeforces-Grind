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

    	ll n,q;
    	cin>>n>>q;
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}

    	vector<ll> prefix(n+1);

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i];
    	}
    	
    	// for(auto x: prefix){
    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;

    	while(q--){


    		ll l,r,k;
    		cin>>l>>r>>k;

    		// puratar sum oi part baad a
    		ll part;
    		ll rem=r-l+1;

    		if(l==1){
    			part=prefix[r];
    		}
    		else{

    			part=prefix[r]-prefix[l-1];
    		}

    		//debug(part)
    		//debug(prefix[n])
    		// sum theke oi part ta baad dile
    		ll left=prefix[n]-part;
    		//debug(left)
    		left+=(rem*k);

    		//debug(left)
    		if(left%2==0){
    			cout<<"NO"<<endl;
    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}