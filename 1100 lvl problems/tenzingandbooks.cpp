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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	vector<ll> v2(n);
    	vector<ll> v3(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v3[i];
    	}

    	// cout<<x<<endl;
    	// printVector(v1);
    	// printVector(v2);
    	// printVector(v3);

    	vector<ll> bits(32);

    	ll hold=x;
    	ll index=0;
    	while(hold){

    		if(hold%2==0){
    			bits[index]=0;
    		}
    		else{
    			bits[index]=1;
    		}
    		hold/=2;
    		index++;
    	}

    	//printVector(bits);

    	// shob gular prefix
    	ll ans=0;
    	for(int i=0;i<n;i++){

    		ll hold=v1[i];
    		ll j=0;
    		int count=1;
    		while(hold){	

    			if(hold%2==1){

    				if(bits[j]!=1){
    					count=-1;
    					break;
    				}

    			}
    			hold/=2;
    			j++;
    		}
    		if(count==1){
    			ans=(ans|v1[i]);
    		}
    		else{
    			break;
    		}
    	}

    	for(int i=0;i<n;i++){

    		ll hold=v2[i];
    		ll j=0;
    		int count=1;
    		while(hold){	

    			if(hold%2==1){

    				if(bits[j]!=1){
    					count=-1;
    					break;
    				}

    			}
    			hold/=2;
    			j++;
    		}
    		if(count==1){
    			ans=(ans|v2[i]);
    		}
    		else{
    			break;
    		}
    	}

    	for(int i=0;i<n;i++){

    		ll hold=v3[i];
    		ll j=0;
    		int count=1;
    		while(hold){	

    			if(hold%2==1){

    				if(bits[j]!=1){
    					count=-1;
    					break;
    				}

    			}
    			hold/=2;
    			j++;
    		}
    		if(count==1){
    			ans=(ans|v3[i]);
    		}
    		else{
    			break;
    		}
    	}

    	if(ans==x){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}


    	t--;
    }

    return 0;
}