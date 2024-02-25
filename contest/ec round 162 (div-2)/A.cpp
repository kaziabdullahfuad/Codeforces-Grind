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
    	int ones=0;
    	int zeroes=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		if(v1[i]==1){
    			ones++;
    		}
    	}

    	if(ones==1 || ones==n){
    		cout<<0<<endl;
    	}
    	else{

    		int left=0;
    		int right=n-1;

    		for(int i=0;i<n;i++){

    			if(v1[i]==1){
    				left=i;
    				break;
    			}
    		}

    		for(int i=n-1;i>=0;i--){

    			if(v1[i]==1){
    				right=i;
    				break;
    			}
    		}

    		//cout<<left<<" "<<right<<endl;

    		int zeroes=0;

    		for(int i=left;i<=right;i++){

    			if(v1[i]==0){
    				zeroes++;
    			}
    		}

    		cout<<zeroes<<endl;
    	}

    	t--;
    	
    }

    return 0;
}