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

    

	string s;
	cin>>s;

	ll n=s.size();

	map<ll,vector<char>> m1;

	ll start=0;
	m1[0].push_back(s[0]);

	if(s[0]=='('){
		start++;
	}
	else{
		start--;
	}


	// for(auto x:m1){

	// 	for(int i=0;i<x.second.size();i++){

	// 		cout<<x.second[i]<<" ";
	// 	}
	// }
	// cout<<endl;
	// cout<<start<<endl;

	for(int i=1;i<n;i++){

		m1[start].push_back(s[i]);

		if(s[i]=='('){
			start++;
		}
		else{
			start--;
		}
	}
	string ans="";

	for(auto x:m1){

		//cout<<x.first<<"->";
		ll n=x.second.size();
		for(ll i=n-1;i>=0;i--){

			//cout<<x.second[i]<<" ";
			ans+=x.second[i];
		}
		//cout<<endl;
	}
	
	cout<<ans<<endl;	

    return 0;
}