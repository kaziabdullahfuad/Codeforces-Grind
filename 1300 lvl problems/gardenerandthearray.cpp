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

    	map<ll,ll> m1;
    	ll start=1;
    	ll holder=n;
    	while(n){

    		ll k;
    		cin>>k;

    		vector<ll> v1(k);

    		//debug(k)
    		for(int i=0;i<k;i++){

    			cin>>v1[i];
    			
    			if(m1[v1[i]]!=0){

    				m1[v1[i]]=-1;
    			}
    			else{
    				m1[v1[i]]=start;
    			}
    		}
    		start++;


    		n--;
    	}

    	// cout<<"HERE"<<endl;

    	// for(auto x:m1){

		// 	cout<<x.first<<" "<<x.second<<endl;
		// }
    	ll count=0;
    	set<ll> s1;
		for(auto x:m1){

			if(x.second!=-1){
				//count+=x.second;
				s1.insert(x.second);
			}
		}

		 //debug(count)
		// debug(n)
		//debug(s1.size())
		if(s1.size()>=holder){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}

    	t--;
    }

    return 0;
}