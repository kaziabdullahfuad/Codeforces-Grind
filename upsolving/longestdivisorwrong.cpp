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

    	ll n;
    	cin>>n;

    	// all divisors
    	vector<ll> divisors;

    	for(ll i=1;i*i<=n;i++){

    		if(n%i==0){

    			if((n/i)==i){
    				divisors.push_back(i);
    			}
    			else{
    				divisors.push_back(i);
    				divisors.push_back(n/i);
    			}
    		}
    	}

    	//printVector(divisors);
    	sort(all(divisors));
    	//printVector(divisors);
    	//cout<<divisors.size()<<endl;
    	ll ans=1;
    	ll cur=1;
    	set<ll> s1;
    	for(int i=0;i<divisors.size()-1;i++){

    		if(abs(divisors[i]-divisors[i+1])!=1){
    			ans=max(ans,cur);
    			cur=1;
    		}
    		else{
    			cur++;
    		}
    	}
    	ans=max(ans,cur);

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}