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

    	for(ll i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);

    	vector<ll> holder(n);

    	holder[0]=v1[0];

    	for(ll i=1;i<n;i++){

    		holder[i]=holder[i-1]+v1[i];
    	}

    	//printVector(holder);

    	vector<ll> result;
    	ll temp=v1[0];
    	result.push_back(temp);
    	ll count=n;
    	for(int i=1;i<n;i++){
    		// cout<<temp<<endl;
    		// cout<<v1[i]<<endl;
    		if(temp<m || v1[i]<m){

    			temp=temp+v1[i];
    			count--;
    			//result.push_back(temp);
    		}
    		else{
    			
    			result.push_back(v1[i]);
    			temp=v1[i];
    		}
    	}
    	//printVector(result);
    	//cout<<temp<<endl;
    	if(temp<m){
    		count--;
    	}
    	//cout<<result.size()<<endl;
    	cout<<count<<endl;

    	t--;
    }

    return 0;
}