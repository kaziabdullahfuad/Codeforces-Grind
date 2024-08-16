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

    	vector<ll> v1(60,0);
    	ll count=0;
    	for(ll i=0;i<60;i++){

    		// ata just simpy 1,2,4,8 mane 2 ar power gula korbe
    		// ata ke left shift bole
    		ll val=(1ll<<i);

    		//cout<<val<<endl;
    		// ai val&n just oi bit ta set ki na check kore
    		if(val&n){
    			count++;
    			v1[i]=1;
    		}
    	}

    	if(count==1){
    		cout<<1<<endl;
    		cout<<1<<endl;
    	}
    	else{
    	//printVector(v1);
    	vector<ll> ans;
    	//ans.push_back(n);
    	ans.push_back(n);
    	for(ll i=0;i<60;i++){

    		if(v1[i]==1){

    			ll val=(1LL<<i);
    			//cout<<i<<" "<<val<<" "<<n-val<<endl;
    			//cout<<n-val<<" ";
    			ans.push_back(n-val);
    		}
    	}

    	cout<<ans.size()<<endl;
    	reverse(all(ans));
    	printVector(ans);
    }

    	t--;
    }

    return 0;
}