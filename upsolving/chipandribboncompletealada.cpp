// problem link:https://codeforces.com/contest/1901/problem/B
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
    	
    	if(n==1){

    		ll first=v1[0];
    		cout<<first-1<<endl;
    	}
    	else{

    		ll first=v1[0];
    		ll count=0;

    		for(int i=0;i<n;i++){
    			if(v1[i]==first)
    				count++;
    		}
    		cout<<"COUNT:"<<count<<endl;
    		ll left=n-count;
    		cout<<left<<endl;

    		for(int i=1;i<n-1;i++){

    			if(v1[i]!=first && v1[i]==v1[i+1]){
    				left--;
    			}
    		}
    		cout<<left<<endl;
    	}

    	t--;
    }

    return 0;
}