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
    	vector<ll> v2(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    		
    	}
    	
    	ll total_pos=0;
    	ll total_neg=0;

    	for(int i=0;i<n;i++){

    		if(v1[i]==-1 && v2[i]==-1){
    			total_neg--;
    		}
    		else if(v1[i]==1 || v2[i]==1){
    			total_pos++;
    		}
    	}
    	
    	cout<<total_neg<<" "<<total_pos<<endl;

    	ll remain=total_neg+total_pos;
    	debug(remain)
    	// cout<<remain/2<<" "<<remain-(remain/2)<<endl;
    	if(remain%2==0){
    		cout<<remain/2<<endl;
    	}
    	else{
    		ll min_val=remain/2;

    		min_val=min(min_val,remain-(remain/2));
    		cout<<min_val<<endl;
    	}
    	

    	t--;
    }

    return 0;
}