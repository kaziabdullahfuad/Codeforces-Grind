// problem link:https://codeforces.com/contest/1899/problem/E
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

    	bool alr_sorted=true;

    	for(int i=0;i<n-1;i++){

    		if(v1[i]>v1[i+1]){
    			alr_sorted=false;
    			break;
    		}
    	}

    	if(alr_sorted){
    		cout<<0<<endl;
    	}
    	else{

    		ll min_val=1e10;
    		//cout<<min_val<<endl;
    		ll index=0;
    		for(int i=0;i<n;i++){

    			if(v1[i]<min_val){
    				index=i;
    				min_val=v1[i];
    			}
    		}
    		//cout<<index<<" "<<min_val<<endl;

    		// check if min element last index ki na
    		// last index hole possible
    		if(index==n-1){
    			cout<<n-1<<endl;
    		}
    		else{

    			// check if index ar por 
    			// mis match ki na

    			bool no_mismatch=true;

    			for(int i=index+1;i<n-1;i++){

    				if(v1[i]>v1[i+1]){
    					no_mismatch=false;
    					break;
    				}
    			}
    			if(no_mismatch){
    				cout<<index<<endl;
    			}
    			else{
    				cout<<-1<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}