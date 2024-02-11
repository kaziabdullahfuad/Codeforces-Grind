// problem link: https://www.spoj.com/problems/CSUMQ/
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

    ll n;
    cin>>n;
    vector<ll> v1(n);
    
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }
    
    vector<ll> holder(n);

    holder[0]=v1[0];

    // prefix sum
    for(int i=1;i<n;i++){

    	holder[i]=holder[i-1]+v1[i];
    }

    //printVector(v1);
    //printVector(holder);

    //cumulative range part
    // since 0 based indexing, if l=1 holder[r-1]
    // if l>1 cout<<holder[r-1]-holder[l-2]

    ll q;
    cin>>q;

    // 0 based indexing query here
    for(int i=1;i<=q;i++){

    	ll l,r;
    	cin>>l>>r;

    	if(l==0){
    		cout<<holder[r]<<endl;
    	}
    	else{
    		cout<<holder[r]-holder[l-1]<<endl;
    	}
    }

    return 0;
}