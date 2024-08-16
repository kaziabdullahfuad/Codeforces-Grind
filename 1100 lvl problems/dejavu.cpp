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

    	ll n,q;
    	cin>>n>>q;
    	vector<ll> v1(n);
    	vector<ll> v2(q);
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	for(int i=0;i<q;i++){
    		cin>>v2[i];
    	}

    	//printVector(v1);

    	//cout<<v1[1]+pow(2,3);
    	ll min_val=1e9;

    	for(int i=0;i<q;i++){

    		if(v2[i]<min_val){
    			ll hold=pow(2,v2[i]);
    			ll add=pow(2,v2[i]-1);
    			min_val=v2[i];
    			//cout<<hold<<" "<<add<<" "<<min_val<<endl;
    			for(int j=0;j<n;j++){

    				if(v1[j]%hold==0){
    					v1[j]+=add;
    				}
    			}
    		}


    	}

    	printVector(v1);

    	t--;
    }

    return 0;
}