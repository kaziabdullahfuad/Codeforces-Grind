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
    	
    	map<ll,vector<ll>> m1;

    	for(int i=0;i<n;i++){

    		m1[v1[i]].push_back(i);
    	}

    	vector<vector<ll>> v;
    	for(auto x:m1){

    		//cout<<x.first<<": ";
    		//cout<<x.second.size()<<endl;
    		v.push_back(x.second);
    		for(auto val:x.second){
    			//cout<<val<<" ";
    		}
    		//cout<<endl;

    	}

    	sort(all(v));
    	//cout<<"HERE"<<endl;
    	// for(auto x:v){

    	// 	for(auto y:x){

    	// 		cout<<y<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }
    	ll m;
    	cin>>m;


    	while(m){

    		string s;
    		cin>>s;

    		ll len=s.size();

    		if(len==n){

    			map<char,vector<ll>> m2;
    			vector<vector<ll>> v1;

    			for(int i=0;i<len;i++){
    				m2[s[i]].push_back(i);
    			}

    			for(auto x:m2){

    				v1.push_back(x.second);
    			}

    			sort(all(v1));

    			// for(auto x:v1){

    			// 	for(auto y:x){

    			// 		cout<<y<<" ";
    			// 	}
    			// 	cout<<endl;
    			// }

    			if(v==v1){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}

    		}
    		else{
    			cout<<"NO"<<endl;
    		}

    		m--;
    	}

    	t--;
    }

    return 0;
}