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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	ll max_val=-1e18;
    	ll sum=0;
    	int count=1;
    	ll max_val_two=-1e18;
    	ll min_val=1e18;
    	ll min_val_two=1e18;

    	for(int i=0;i<n;i++){

    		max_val=max(max_val,v1[i]);
    		min_val=min(min_val,v1[i]);
    	}

    	//debug(max_val);
    	//debug(min_val);
    	ll max_count=0;
    	ll min_count=0;

    	for(int i=0;i<n;i++){

    		if(v1[i]==max_val){

    			max_count++;
    		}

    		if(v1[i]==min_val){
    			min_count++;
    		}
    	}

    	//debug(max_count)
    	//debug(min_count)

    	if(max_count>1){

    		max_val_two=max(max_val,max_val_two);
    	}

    	if(min_count>1){

    		min_val_two=min(min_val_two,min_val);
    	}

    	for(int i=0;i<n;i++){

    		if(v1[i]==max_val){
    			continue;
    		}
    		else{
    			max_val_two=max(max_val_two,v1[i]);
    		}
    	}

    	for(int i=0;i<n;i++){

    		if(v1[i]==min_val){
    			continue;
    		}
    		else{
    			min_val_two=min(min_val_two,v1[i]);
    		}
    	}

    	// ai min val, ak min val
    	// aj max val, aj max val two

    	// debug(max_val)
    	// debug(max_val_two)
    	// debug(min_val)
    	// debug(min_val_two)

    	sum=abs(min_val-max_val)+abs(max_val-min_val_two)+abs(min_val_two-max_val_two)+abs(max_val_two-min_val);
    	cout<<sum<<endl;


    	t--;
    }

    return 0;
}