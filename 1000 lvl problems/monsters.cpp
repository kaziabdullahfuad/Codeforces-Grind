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
    	
    	//printVector(v1);
    	map<ll,vector<ll>> m1;
    	vector<ll> ans;
    	for(int i=0;i<n;i++){
    		v1[i]=v1[i]%k;
    		if(v1[i]==0){
    			ans.push_back(i+1);
    		}
    	}

    	//printVector(v1);
    	//printVector(ans);

    	for(int i=0;i<n;i++){

    		m1[v1[i]].push_back(i+1);
    	}

    	// for(auto x:m1){

    	// 	cout<<x.first<<" ->";

    	// 	for(int i=0;i<x.second.size();i++){

    	// 			cout<<x.second[i]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }
    	// cout<<"SHURU"<<endl;
    	for(auto it=m1.rbegin();it!=m1.rend();it++){

    		//cout<<it->first<<"->";
    		if(it->first==0){
    			break;
    		}
    		for(int i=0;i<it->second.size();i++){

    			//cout<<it->second[i]<<" ";
    			ans.push_back(it->second[i]);
    		}
    		//cout<<endl;
    	}	

    	//cout<<endl;

    	printVector(ans);

    	t--;
    }

    return 0;
}