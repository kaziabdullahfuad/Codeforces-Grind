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
    	
    	vector<ll> prefix(n+1);

    	for(int i=1;i<=n;i++){

    		prefix[i]=prefix[i-1]+v1[i-1];
    	}

    	for(int i=1;i<=n;i++){

    		cout<<prefix[i]<<" ";
    	}
    	cout<<endl;

    	ll index=1;
    	ll ans=0;
    	ll i=0;
    	while(i<n){

    		ll hold=prefix[index]-v1[i];
    		//cout<<prefix[index]<<" "<<v1[i]<<" "<<hold<<endl;
    		if(hold<=v1[i]){

    			if(hold==v1[i]){

    				cout<<prefix[index]<<" "<<v1[i]<<endl;
    				ans++;
    			}

    			if(index==n){

    				break;
    			}
    			index++;
    		}
    		else{
    			i++;
    		}
    	}
    	//cout<<i<<endl;
    	//cout<<index<<endl;

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}