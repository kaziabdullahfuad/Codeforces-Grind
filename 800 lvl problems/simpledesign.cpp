// problem link:https://codeforces.com/problemset/problem/1884/A
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
bool beautifulK(ll x,ll k,ll &sum,ll great){

	ll mul=1;
	ll hold=x;
	sum=0;
	while(x){

		ll last=x%10;
		sum+=last;
		//mul*=10;
		x/=10;
	}
	//cout<<sum<<endl;

	if(sum%k==0 && hold>=great){
		return true;
	}
	else{
		return false;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll x,k;
    	cin>>x>>k;

    	ll highest=1e18;
    	//cout<<highest<<endl;
    	bool found=false;

    	for(ll i=x;i<=highest;i++){
    		//cout<<i<<endl;
    		ll sum=0;
    		found=beautifulK(i,k,sum,x);
    		
    		if(found){
    			cout<<i<<endl;
    			break;
    		}
    	}

    	t--;
    }

    return 0;
}