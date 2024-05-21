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
    	
    	// 8-3+1=6.
    	/* 1 2 3 2 2 3 4 2
		1,2,3 
		2,3,2 
		3,2,2	
		2,2,3
		2,3,4
		3,4,2
		*/
    	map<pair<ll,ll>,vector<ll>> m1;
    	ll x,y,z;
		x=v1[0],y=v1[1],z=v1[2];
		//x=1,y=1,z=2;
		cout<<x<<" "<<y<<" "<<z<<endl;
		if(x==y){
			m1[make_pair(x,y)].push_back(z);
		}
		// for(auto x:m1){
		// 	cout<<x.first.first<<" "<<x.first.second;
		// 	cout<<endl;
		// 	for(int i=0;i<x.second.size();i++){
		// 		cout<<x.second[i]<<endl;
		// 	}
		// }

		for(int i=3;i<n;i++){
			x=y,y=z;
			z=v1[i];
			cout<<x<<" "<<y<<" "<<z<<endl;

			
		}

    	t--;
    }

    return 0;
}