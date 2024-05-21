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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll max_val=*max_element(all(v1));
    	ll min_val=*min_element(v1.begin(),v1.end());

    	//cout<<min_val<<" "<<max_val<<endl;

    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		ll max_val=-3;

    		// o fix rakhbo

    		for(int i=1;i<n;i++){

    			max_val=max(v1[i]-v1[0],max_val);
    		}

    		for(int i=0;i<n-1;i++){

    			max_val=max(v1[n-1]-v1[i],max_val);
    		}

    		for(int i=0;i<n-1;i++){

    			max_val=max(v1[i]-v1[i+1],max_val);
    		}

    		cout<<max_val<<endl;
    	}

    	t--;
    }

    return 0;
}