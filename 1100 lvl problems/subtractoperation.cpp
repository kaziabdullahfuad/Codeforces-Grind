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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1));

    	ll left=0;
    	ll right=n-1;
    	bool found=false;
    	//cout<<k<<endl;
    	//printVector(v1);

    	if(v1[n-1]-v1[0]<k){
    		//cout<<"HERE"<<endl;
    		cout<<"NO"<<endl;
    	}
    	else{

    		map<ll,ll> m1;

    		for(int i=0;i<n;i++){

    			ll target=(k-v1[i])*-1;
    			//debug(v1[i])
    			//debug(target);

    			if(m1[target]){
    				found=true;
    				break;
    				//cout<<"YES"<<endl;
    			}
    			else{
    				//cout<<"NO"<<endl;
    				m1[v1[i]]++;
    			}
    		}

    		if(found){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}