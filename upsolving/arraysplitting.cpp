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


   	ll n,k;
   	cin>>n>>k;
   	vector<ll> v1(n);
   	
   	for(int i=0;i<n;i++){
   		cin>>v1[i];
   	}
   	
   	vector<ll> holder(n);

   	holder[n-1]=v1[n-1];

   	for(int i=n-2;i>=0;i--){

   		holder[i]=holder[i+1]+v1[i];
   	}

   	

   	sort(holder.begin()+1,holder.end(),greater<ll>());

    
    ll sum=holder[0];
    //cout<<"START:"<<sum<<endl;
    //k--;
    //cout<<k<<endl;
    for(ll i=1;i<k;i++){
    	//cout<<holder[i]<<endl;
    	//cout<<sum<<endl;
    	sum+=holder[i];
    }
    cout<<sum<<endl;

    return 0;
}