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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	// cout<<"HERE"<<endl;
    	// printVector(v1);

    	vector<ll> holder(35);

    	//printVector(holder);

    	for(int i=0;i<n;i++){

    		ll val=v1[i];

    		for(int j=0;j<=31;j++){

    			ll temp=(1ll<<j);

    			if(val&temp){

    				holder[j]++;
    			}
    		}
    	}

    	//printVector(holder);

    	ll sum=0;
    	ll count=k;

    	//cout<<(1ll<<31)<<endl;
    	ll hold=holder[31];
    	//debug(hold)

    	if(hold==n){
    		sum+=(1ll<<31);
    	}
    	//debug(sum)

    	for(int j=30;j>=0;j--){

    		ll temp=holder[j];
    		//debug(temp)
    		if(temp==n){
    			// mane already shob gula 1
    			sum+=(1ll<<j);

    		}
    		else{

    			// koita n korte hobe
    			ll remain=n-temp;
    			//debug(remain)

    			if(count>=remain){
    				sum+=(1ll<<j);
    				count-=remain;
    			}
    		}

    	}

    	//debug(sum)
    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}