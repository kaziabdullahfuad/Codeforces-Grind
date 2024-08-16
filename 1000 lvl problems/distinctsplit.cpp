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

    	string s;
    	cin>>s;

    	map<char,ll> m1;

    	for(int i=0;i<n;i++){
    		m1[s[i]]++;
    	}

    	//cout<<m1.size()<<endl;

    	ll max_val=-1e9;
    	map<char,ll> m2;
    	for(int i=0;i<n-1;i++){

    		m2[s[i]]++;
    		//debug(i+1)
    		//debug(s[i])
    		ll first=m2.size();
    		//cout<<first<<endl;
    		m1[s[i]]--;
    		ll second=0;
    		for(auto x:m1){

    			if(x.second>=1){
    				second++;
    			}
    		}
    		//cout<<first+second<<endl;
    		max_val=max(max_val,first+second);
    	}
    	
    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}