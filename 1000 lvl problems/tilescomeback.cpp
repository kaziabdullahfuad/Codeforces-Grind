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
    	ll index=0;
    	bool found1=false;
    	bool found2=false;
    	ll count=0;
    	ll val=v1[0];
    	ll last=v1[n-1];

    	if(val==last){
    		ll count=0;
    		for(int i=0;i<n;i++){
    			//cin>>v1[i];
    			if(v1[i]==val){
    				count++;
    			}
    		}

    		if(count>=k){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}
    	else{
    	for(int i=0;i<n;i++){

    		if(v1[i]==val){
    			count++;
    		}

    		if(count==k){
    			index=i;
    			found1=true;
    			break;
    		}
    	}
    	val=v1[n-1];
    	count=0;
    	for(int i=index+1;i<n;i++){

    		if(v1[i]==val){
    			count++;
    		}

    		if(count==k){
    			found2=true;
    			break;
    		}
    	}

    	if(found1 && found2){
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