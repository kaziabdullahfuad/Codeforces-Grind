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

    	//cout<<"Bismillah"<<endl;

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    		
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);
    	ll val=40741153;

    	vector<ll> v2;
    	vector<ll> v3;

    	for(int i=0;i<n;i++){

    		if(v1[i]<val){
    			v2.push_back(v1[i]);
    		}
    		else{
    			v3.push_back(v1[i]);
    		}
    		v1[i]=abs(v1[i]-40741153ll);
    	}

    	

    	printVector(v2);
    	cout<<"HERE"<<endl;
    	printVector(v3);

    	cout<<endl;

    	printVector(v1);

    	t--;
    }

    return 0;
}