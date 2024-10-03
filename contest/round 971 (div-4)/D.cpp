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

    	set<ll> s1; // for 0
    	set<ll> s2; // for

    	while(n){

    		ll x,y;
    		cin>>x>>y;

    		if(y==0){

    			s1.insert(x);
    		}
    		else{

    			s2.insert(x);
    		}

    		n--;
    	}

    	// for(auto x:s1){

    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;

    	// for(auto x:s2){

    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;

    	ll sum=0;

    	for(auto x:s1){

    		if(s2.find(x)!=s2.end()){
    			sum+=s1.size()-1;
    		}

    		if(s1.find(x+2)!=s1.end() && s2.find(x+1)!=s2.end()){
    			//debug(x)
    			//cout<<x+2<<endl;
    			sum++;
    		}
    	}

    	//cout<<sum<<endl;

    	for(auto x:s2){

    		if(s1.find(x)!=s1.end()){

    			sum+=s2.size()-1;
    		}

    		if(s2.find(x+2)!=s2.end() && s1.find(x+1)!=s1.end()){

    			sum++;
    		}
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}