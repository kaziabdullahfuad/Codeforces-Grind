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

    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		sort(all(v1));

    		printVector(v1);

    		ll min_val=1e18;
    		bool found=false;
    		ll i=0;
    		for(i=0;i<n-1;i++){

    			//cout<<v1[i]<<" "<<v1[i+1]<<endl;
    			if(abs(v1[i]-v1[i+1])>k){
    				debug(i)
    				cout<<v1[i]<<" "<<v1[i+1]<<endl;
    				break;
    			}
    			else{
    				found=true;
    			}
    		}

    		if(found){
    			min_val=min(min_val,n-i-1);
    		}

    		bool second_found=false;

    		i=n-1;

    		for(i;i>=1;i--){

    			if(abs(v1[i]-v1[i-1])>=k){
    				break;
    			}
    			else{
    				second_found=true;
    			}
    		}

    		

    	}
    	

    	t--;
    }

    return 0;
}