#include<iostream>
#include<cstring>
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

    	vector<ll> prefix(n);

    	vector<ll> count_one(n);

    	for(int i=0;i<n;i++){

    		cin>>v1[i];
    		//cout<<v1[i]<<endl;

    		prefix[i]=v1[i];

    		if(v1[i]==1){
    			count_one[i]=1;
    		}
    	}

    	

    	for(int i=1;i<n;i++){

    		prefix[i]+=prefix[i-1];
    		count_one[i]+=count_one[i-1];
    	}

    	

    	while(q){

    		ll l,r;
    		cin>>l>>r;

    		l--;
    		r--;

    		if(l==r){

    			cout<<"NO"<<endl;
    		}
    		else{

    			ll sum=prefix[r];
    			ll countr=count_one[r];

    			if(l>0){

    				sum-=prefix[l-1];
    				countr-=count_one[l-1];
    			}

    			

    			sum-=(2*countr);

    			

    			ll int rem = r - l + 1 - countr;

    			
    			if(sum>=rem){
    				cout<<"YES"<<endl;
    			}
    			else{

    				cout<<"NO"<<endl;
    			}

    		}
    		

    		q--;
    	}


    	t--;
    }

    return 0;
}