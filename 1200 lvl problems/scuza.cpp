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

    	ll n,q;
    	cin>>n>>q;
    	vector<ll> v1(n);
    	vector<ll> v2(n);
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	v2[0]=v1[0];
    	for(int i=1;i<n;i++){

    		v2[i]=max(v1[i],v2[i-1]);
    	}
    	//printVector(v2);
    	vector<ll> prefix(n);
    	prefix[0]=v1[0];

    	for(int i=1;i<n;i++){
    		prefix[i]=prefix[i-1]+v1[i];
    	}

    	ll max_val=*max_element(all(v1));
    	ll first_val=v1[0];

    	// now obviously if a val>=max_val so it would simplyy be summation
    	// if val<first_val prothom badhai paar korte parlo na tahole zero
    	//printVector(prefix);

    	

    	while(q){

    		ll val;
    		cin>>val;
    		//debug(val)

    		if(val<first_val){
    			cout<<0<<" ";
    		}
    		else if(val>=max_val){

    			cout<<prefix[n-1]<<" ";
    		}
    		else{

    			vector<ll> ::iterator it=upper_bound(all(v2),val);
		    	
		    	cout<<prefix[it-v2.begin()-1]<<" ";

    		}


    		q--;
    	}

    	cout<<endl;

    	t--;
    }

    return 0;
}