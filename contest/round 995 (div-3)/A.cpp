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

    	// cout<<"Bismillah"<<endl;
    	// cout<<"Allahu Akbar"<<endl;

    	ll n;
    	cin>>n;

    	ll hold=n;
    	
    	// for(int i=0;i<2;i++){

    	// 	vector<ll> v1(hold);

    	// 	for(int j=0;j<hold;j++){
    	// 		cin>>v1[j];
    	// 	}


    	// }

    	vector<ll> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	vector<ll> v2(n);

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	if(n==1){

    		cout<<v1[0]<<endl;
    	}
    	else{

    		ll sum=0;
    		for(int i=0;i<n;i++){

    			if(i==n-1){
    				sum+=v1[i];
    			}
    			else{

    				if(v1[i]>v2[i+1]){
    					sum+=v1[i]-v2[i+1];
    				}
    			}
    			//debug(sum)
    		}

    		cout<<sum<<endl;
    	}

    	t--;
    }

    return 0;
}