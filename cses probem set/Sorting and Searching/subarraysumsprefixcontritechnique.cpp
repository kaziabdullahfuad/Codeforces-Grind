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

    ll n,x;
    cin>>n>>x;
    vector<ll> v1(n+1);
    
    for(int i=1;i<=n;i++){
    	cin>>v1[i];
    }

    vector<ll> prefix(n+1);

    for(int i=1;i<=n;i++){

    	prefix[i]=prefix[i-1]+v1[i];
    }

    //printVector(v1);
    //printVector(prefix);
    //debug(x)
    map<ll,ll> m1;
    ll count=0;
    m1[0]=1;
    for(int i=1;i<=n;i++){

    	//cout<<"Current prefix summation "<<i<<" "<<prefix[i]<<endl;
    	//cout<<"VALUE NEEDED to make x:"<<x<<" "<<prefix[i]-x<<endl;
    	ll value_needed=prefix[i]-x;

    	if(m1.count(value_needed)){
    		//cout<<"HERE"<<endl;
    		//cout<<prefix[i]<<" "<<value_needed<<" "<<m1[value_needed]<<endl;
    		count+=m1[value_needed];
    	}

    	m1[prefix[i]]++;
    }

    cout<<count<<endl;
    

    return 0;
}