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

    	/*
		the size of the permutation to be constructed and two integers.
    	*/
    	ll n,m,k;
    	cin>>n>>m>>k;

    	for(ll i=n;i>=k;i--){
    		cout<<i<<" ";
    	}

    	// remain
    	ll remain=m+1;
    	//cout<<remain<<endl;

    	for(ll i=remain;i<k;i++){
    		cout<<i<<" ";
    	}

    	for(ll i=1;i<=m;i++){
    		cout<<i<<" ";
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}