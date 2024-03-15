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

    	ll n,x,y;
    	cin>>n>>x>>y;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);
    	map<pair<ll,ll>,ll> m1;

    	ll ans=0;
    	ll temp1=0;
    	ll temp2=0;
    	ll first,second;
    	for(int i=0;i<n;i++){

    		temp1=v1[i]%x;
    		temp2=v1[i]%y;

    		first=(x-temp1)%x;
    		second=temp2;

    		ans+=m1[{first,second}];

    		m1[{temp1,temp2}]++;
    	}

    	cout<<ans<<endl;

    	

    	t--;
    }

    return 0;
}