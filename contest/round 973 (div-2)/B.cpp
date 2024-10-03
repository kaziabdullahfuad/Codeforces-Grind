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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	
    	if(n==2){

    		cout<<v1[n-1]-v1[n-2]<<endl;
    	}
    	else{

    		ll last_age=n-2;
    		//cout<<"HERE"<<endl;
    		for(int i=n-3;i>=0;i--){

    			//cout<<v1[last_age]<<" "<<v1[i]<<" "<<v1[last_age]-v1[i]<<endl;
    			v1[last_age]-=v1[i];

    		}

    		//cout<<v1[last_age]<<endl;

    		cout<<v1[n-1]-v1[last_age]<<endl;

    	}

    	t--;
    }

    return 0;
}