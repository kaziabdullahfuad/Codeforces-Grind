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
template<typename t1>
void printVectorOne(vector<t1> v1){

	for(int i=1;i<=v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
ll solve(ll i){

	string s;
	
	s=to_string(i);
	ll n=s.size();
	bool found=true;
	ll count=0;
	for(int i=0;i<n;i++){

		if(s[i]!='0'){
			count++;
		}
		if(count>1){
			found=false;
			break;
		}
	}

	if(found){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll len=999999;

    vector<ll> v1(len+1);
    ll val;
    for(ll i=1;i<=len;i++){

    	if(i<=10){
    		v1[i]=1;
    	}
    	else{
    		val=solve(i);
    		v1[i]=val;
    	}
    }

    //printVectorOne(v1);

    //cout<<v1[11]<<endl;

    vector<ll> prefix(len+1);

    for(ll i=1;i<=len;i++){

    	prefix[i]=prefix[i-1]+v1[i];
    }

    //cout<<prefix[30]<<endl;

    ll t;
    cin>>t;

    while(t--){

    	ll n;
    	cin>>n;

    	cout<<prefix[n]<<endl;
    }
    
    return 0;
}