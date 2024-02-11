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

    	if(n<=2){
    		cout<<-1<<endl;
    	}
    	else{

    		// divided into n we get
    		ll sum=n*(n+1);

    		ll div=sum/n;

    		//cout<<div<<endl;

    		vector<ll> result;

    		if(div%2==0){
	    		
	    		for(ll i=0;i<n;i++){

	    			ll val=div-v1[i];
	    			result.push_back(val);
	    		}

	    		printVector(result);
	    	}
	    	else{

	    		vector<ll> result(n);

	    		ll left=0;
	    		ll right=1;
	    		ll index=1;
	    		while(left<n){
	    			//cout<<left<<endl;
	    			result[index]=v1[left];
	    			left+=2;
	    			index+=2;
	    		}
	    		ll an_index=0;
	    		while(right<n){
	    			//cout<<right<<endl;
	    			result[an_index]=v1[right];
	    			right+=2;
	    			an_index+=2;
	    		}

	    		printVector(result);
	    	}
    	}
    	

    	t--;
    }

    return 0;
}