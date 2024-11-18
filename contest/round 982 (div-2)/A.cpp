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

    	ll val1=0;
    	ll val2=0;

    	while(n){

    		ll w,h;
    		cin>>w>>h;

    		val1=max(val1,w);
    		val2=max(val2,h);

    		n--;
    	}


    	//cout<<val1<<" "<<val2<<endl;

    	cout<<(2ll*(val1+val2))<<endl;

    	t--;
    }

    return 0;
}