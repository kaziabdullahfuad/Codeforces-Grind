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

    ll n,q;
    cin>>n>>q;
    // 3 2 4 5 1 1 5 3
    vector<ll> v1(n);
    
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }

    vector<ll> prefix(n+1,0);

    for(int i=1;i<=n;i++){

    	prefix[i]=(prefix[i-1]^v1[i-1]);
    }

    // for(int i=1;i<=n;i++){
    // 	cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    while(q){

    	ll left,right;
    	cin>>left>>right;
    	//cout<<left<<" "<<right<<endl;

    	ll val=(prefix[right]^prefix[left-1]);
    	
    	cout<<val<<endl;

    	q--;
    }

    return 0;
}