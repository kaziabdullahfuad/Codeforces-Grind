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
    	
    	ll i=0;
    	ll max_val=v1[0];
    	while(i<n && v1[i]<0){

    		max_val=max(max_val,v1[i]);
    		if(v1[i]>=0){
    			break;
    		}
    		i++;
    	}
    	//printVector(v1);
    	ll val=v1[i];
    	if(i<n){
    		max_val=val;
    	}
    	//cout<<i<<" "<<val<<" "<<max_val<<endl;
    	ll sum=v1[i];
    	i++;    	
    	for(;i<n;i++){
    		//debug(i)
    		if(sum+v1[i]<0 || (abs(val)%2==abs(v1[i])%2)){

    			//cout<<"HERE"<<endl;
    			// jotokhon negative hoi
    			ll j=i;
    			max_val=max(max_val,sum);
    			while(j<n && v1[j]<0){

    				j++;
    			}
    			
    			if(j>=n){
    				break;
    			}
    			else{

    				sum=v1[j];
    				val=v1[j];
    				i=j;
    				max_val=max(max_val,sum);
    			}

    		}
    		else if(val%2==v1[i]%2){
    			cout<<"HERE"<<endl;
    			max_val=max(max_val,sum);
    			sum=0;

    			// jehetu alada hobe so negative hole to mane nai
    			ll j=i;
    			max_val=max(max_val,sum);
    			while(j<n && v1[j]<0){

    				j++;
    			}
    			
    			if(j>=n){
    				break;
    			}
    			else{

    				sum=v1[j];
    				val=v1[j];
    				i=j;
    				max_val=max(max_val,sum);
    			}

    		}
    		else{
    			sum+=v1[i];
    			max_val=max(max_val,sum);
    			val=v1[i];
    		}
    		//cout<<val<<" "<<max_val<<endl;
    	}

    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}