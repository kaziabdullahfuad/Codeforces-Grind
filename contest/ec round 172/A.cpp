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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	map<ll,ll> m1;
    	ll temp=k;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	sort(all(v1),greater<ll>());
    	ll add=0;
    	ll min_val=1e18;
    	bool paise=false;
    	for(int i=0;i<n;i++){

    		if(v1[i]>k){
    			break;
    		}
    		if(v1[i]==k){
    			//cout<<"EKHANE"<<endl;
    			//debug(v1[i])
    			//debug(k)
    			min_val=min(min_val,0ll);
    			break;
    		}
    		else if(v1[i]<k){
    			paise=true;
    			k-=v1[i];
    			min_val=min(min_val,k);
    		}
    		
    	}
    	
    	if(paise){
    		cout<<min_val<<endl;
    	}
    	else{
    		cout<<0<<endl;
    	}

    	t--;
    }

    return 0;
}