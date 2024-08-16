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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	vector<ll> v2=v1;
    	sort(all(v1));
    	vector<ll> prefix(n);
    	prefix[0]=v1[0];

    	for(int i=1;i<n;i++){

    		prefix[i]=prefix[i-1]+v1[i];
    	}

    	//printVector(v1);
    	//printVector(prefix);

    	map<ll,ll> m1;
    	m1[v1[n-1]]=n-1;
    	//cout<<m1[v1[n-1]]<<endl;

    	for(int i=n-1;i>=0;i--){

    		if(prefix[i]>=v1[i+1]){

    			ll total=i;
    			total+=m1[v1[i+1]]-i;

    			//m1[v1[i]]=total;
    			if(m1[v1[i]]==0){
    				m1[v1[i]]=total;
    			}
    		}
    		else{

    			m1[v1[i]]=i;
    		}
    	}

    	// cout<<"HERE"<<endl;
    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	//printVector(v2);

    	for(int i=0;i<n;i++){

    		//cout<<v2[i]<<" "<<m1[v2[i]]<<endl;
    		cout<<m1[v2[i]]<<" ";
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}