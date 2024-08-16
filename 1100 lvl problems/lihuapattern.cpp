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

    	vector<vector<ll>> v1(n,vector<ll>(n));

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

    	// cout<<endl;
    	// for(int i=n-1;i>=0;i--){

    	// 	for(int j=n-1;j>=0;j--){

    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	// ll left=0,right=n-1;
    	// //cout<<"HERE"<<endl;
    	 ll count=0;
    	// while(left<right){

    	// 	for(int i=0,j=n-1;i<n;i++,j--){
    	// 		cout<<v1[i][left]<<" "<<v1[j][right]<<endl;
    	// 		if(v1[i][left]!=v1[j][right]){
    	// 			count++;
    	// 		}
    	// 	}
    	// 	cout<<"ANOTHER"<<endl;
    	// 	left++;
    	// 	right--;
    	// }

    	for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){

    			if(v1[i][j]!=v1[n-i-1][n-j-1]){
    				count++;
    			}
    		}
    	}

    	//cout<<count<<endl;
    	count/=2;
    	//cout<<count<<endl;

    	if(count>k){
    		cout<<"NO"<<endl;
    	}
    	else{

    		ll left=k-count;
    		//cout<<left<<endl;
    		if(left%2==0){
    			cout<<"YES"<<endl;
    		}
    		else{

    			if(n%2==1){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    	}

    	t--;
    }

    return 0;
}