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

    	vector<vector<ll>> v1(n,vector<ll>(n,0));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){

    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<n;j++){

    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	ll i=0;
    	ll count=0;
    	//cout<<"HERE"<<endl;
    	for(int j=n-1;j>=0;j--){

    		// proti bar first col niye kaaj
    		// then diagonal jabo

    		ll row=i;
    		ll col=j;
    		ll min_val=min(0ll,v1[row][col]);
    		//cout<<i<<" "<<j<<endl;
    		while(row<n && col<n){

    			min_val=min(min_val,v1[row][col]);

    			row++;
    			col++;
    		}

    		//debug(min_val)
    		count+=abs(min_val);
    	}

    	//cout<<count<<endl;
    	//cout<<"ANOTHER"<<endl;
    	ll j=0;
    	for(int i=1;i<n;i++){

    		ll row=i;
    		ll col=j;
    		ll min_val=min(0ll,v1[row][col]);
    		//cout<<i<<" "<<j<<endl;
    		while(row<n && col<n){

    			min_val=min(min_val,v1[row][col]);

    			row++;
    			col++;
    		}

    		//debug(min_val)
    		count+=abs(min_val);
    	}

    	cout<<count<<endl;


    	t--;
    }

    return 0;
}