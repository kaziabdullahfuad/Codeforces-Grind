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
    	vector<ll> v1(n+1);
    	map<ll,ll> m1;
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    		m1[v1[i]]=i;
    	}

    	vector<ll> difference;

    	for(auto x:m1){

    		if(x.first!=x.second){

    			difference.push_back(abs(x.first-x.second));
    		}
    	}

    	//printVector(difference);

    	ll gcd_holder;

    	if(difference.size()==1){
    		cout<<difference[0]<<endl;
    	}
    	else{
    		gcd_holder=difference[0];
    		for(int i=1;i<difference.size();i++){

    			gcd_holder=__gcd(gcd_holder,difference[i]);
    		}
    		cout<<gcd_holder<<endl;
    	}


    	t--;
    }

    return 0;
}