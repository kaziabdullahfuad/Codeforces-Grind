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

    	vector<vector<char>> v1(n,vector<char>(n));

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

    	string ans="";

    	if(k==1){

    		for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){
    			cout<<v1[i][j];
    		}
    		cout<<endl;
    		}
    	}
    	else if(k==n){

    		cout<<v1[0][0]<<endl;
    	}
    	else{
    		//cout<<"HERE"<<endl;
    		for(int i=0;i<n;i+=k){
    			//debug(i)
    			for(int j=0;j<n;j+=k){
    				//cout<<j<<" ";
    				cout<<v1[i][j];
    				//ans+=v1[i][j];
    			}
    			//debug(ans)
    			cout<<endl;
    		}

    		//cout<<ans<<endl;
    	}

    	t--;
    }

    return 0;
}