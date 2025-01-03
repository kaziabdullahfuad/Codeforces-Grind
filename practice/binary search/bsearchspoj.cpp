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

    ll n,q;
    cin>>n>>q;
    vector<ll> v1(n);
    
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }

    while(q){

    	ll x;
    	cin>>x;

    	ll low=0;
    	ll high=n-1;
    	ll ind=-1;

    	while(low<=high){


    		ll mid=low+(high-low)/2;


    		if(v1[mid]==x){

    			ind=mid;

    			// aro baam a khujbo
    			high=mid-1;
    		}
    		else if(v1[mid]<x){

    			// aro daan a khujte hobe
    			low=mid+1;
    		}
    		else{

    			//aro baam a khujte hobe
    			high=mid-1;
    		}
    	}

    	cout<<ind<<endl;

    	q--;
    }
    

    return 0;
}