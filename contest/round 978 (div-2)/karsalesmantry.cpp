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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	printVector(v1);
    	sort(all(v1),greater<ll>());
    	printVector(v1);
    	
    	

    	vector<vector<ll>> v3(3,vector<ll>(2,0));

    	ll left=0;
    	debug(v1[left])
    	ll temp=1;
    	bool breaker=true;
    	for(int i=0;i<2;i++){

    		for(int j=0;j<3;j++){

    			cout<<j<<" "<<i<<" ";
    			debug(v1[left])
    			if(v1[left]>=1){
    				v3[j][i]=temp;
    				v1[left]--;
    			}
    			if(v1[left]==0){

    				left++;
    				debug(left)
    				if(left>=n){
    					breaker=false;
    					break;
    				}
    				temp++;

    			}
    		}
    		if(breaker==false){
    			break;
    		}
    		cout<<endl;
    	}
    	
    	for(int i=0;i<3;i++){

    		for(int j=0;j<2;j++){
    			cout<<v3[i][j]<<" ";
    		}
    		cout<<endl;
    	}

    	cout<<left<<endl;

    	t--;
    }

    return 0;
}