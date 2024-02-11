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
    
    for(auto x:v1){
    	cout<<x<<" ";
    }
    cout<<endl;

    vector<ll> holder(n);

    //holder[n-1]=v1[n-1];
    ll sum=0;

    for(ll i=n-1;i>=0;i--){
    	sum+=v1[i];
    	holder[i]=sum;
    	//cout<<sum<<endl;
    }

    for(auto x:holder){
    	cout<<x<<" ";
    }

    cout<<endl;

    return 0;
}