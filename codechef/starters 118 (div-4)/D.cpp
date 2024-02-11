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

    	ll n,m;
    	cin>>n>>m;

    	vector<ll> v1(n);
    	ll count=0;
    	for(ll i=0;i<n;i++){
    		cin>>v1[i];
    		if(v1[i]<m){
    			count++;
    		}
    	}

    	if(count==n){
    		cout<<1<<endl;
    	}
    	else{
    		
    	}

    	t--;
    }

    return 0;
}