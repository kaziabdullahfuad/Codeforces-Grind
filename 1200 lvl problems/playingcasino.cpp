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

    	ll n,m;
    	cin>>n>>m;

    	
    	vector<vector<ll>> v1(n,vector<ll>(m,0));
    	// vector<ll> v2[m];
    	vector<vector<ll>> v2(m,vector<ll>(n,0));
    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			cin>>v1[i][j];
    			// ll val;
    			// cin>>val;
    			// v2[j].push_back(val);
    			//cin>>v2[i][j];

    		}
    	}

    	//sort(v1[1].begin(),v1[1].end());

    	for(int i=0;i<m;i++){

    		for(int j=0;j<n;j++){
    			//cout<<v1[i][j]<<" ";
    			// cout<<j<<" "<<i<<endl;
    			//cout<<v1[j][i]<<" ";
    			v2[i][j]=v1[j][i];

    		}
    		
    	}

    	//sort(v2[1].begin(),v2[1].end());

    	for(int i=0;i<m;i++){
    		sort(v2[i].begin(),v2[i].end());
    	}

    	vector<vector<ll>> v3(m,vector<ll>(n,0));

    	// for(int i=0;i<m;i++){

    	// 	for(int j=0;j<n;j++){
    	// 		//cout<<v1[i][j]<<" ";
    	// 		// cout<<j<<" "<<i<<endl;
    	// 		//cout<<v2[i][j]<<" ";
    			

    	// 	}
    	// 	//cout<<endl;
    	// }
    	//cout<<"HERE"<<endl;
    	for(int i=0;i<m;i++){

    		v3[i][n-1]=v2[i][n-1];
    		for(int j=n-2;j>=0;j--){

    			v3[i][j]=v2[i][j]+v3[i][j+1];
    		}
    		//cout<<endl;
    	}
    	ll sum=0;
    	for(int i=0;i<m;i++){

    		
    		for(int j=0;j<n-1;j++){

    			//sum+=abs(v3[i][j+1]-((n-i-1)*(v2[i][j])));
    			//cout<<v2[i][j]<<" "<<v3[i][j+1]<<" "<<(n-i-1)<<endl;
    			ll mul=(n-j-1);
    			sum+=v3[i][j+1]-(mul*v2[i][j]);
    		}
    	//	cout<<endl;
    	}

    	cout<<sum<<endl;

    



    	t--;
    }

    return 0;
}