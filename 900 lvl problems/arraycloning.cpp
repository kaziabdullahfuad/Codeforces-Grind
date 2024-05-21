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
    	vector<ll> v1(n);
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	
    	ll max_val=-1e10;
    	for(auto x:m1){

    		max_val=max(x.second,max_val);
    	}
    	
    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		// joto gula baki oi gula to swap kora lagbei
    		// and proti bar double kore barte thake

    		ll rest=n-max_val;

    		if(rest==0){
    			cout<<0<<endl;
    		}
    		else{

    			ll copy=1;

    			ll sum=max_val;

    			ll mul=max_val;

    			while(sum<rest){

    				mul*=2;
    				sum+=mul;
    				copy++;
    			}

    			//debug(copy) debug(rest)
    			cout<<copy+rest<<endl;

    		}
    	}

    	t--;
    }

    return 0;
}