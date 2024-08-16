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
    	
    	// find first instance where the value doesn't match
    	// thats our min number
    	ll min_val=v2[0];
    	ll index=0;
    	for(int i=0;i<n;i++){

    		if(v1[i]!=v2[i]){
    			min_val=v2[i];
    			index=i;
    			break;
    		}
    	}

    	//cout<<min_val<<" "<<index<<endl;
    	ll max_val=min_val;
    	ll right=index;
    	for(int i=index;i<n;i++){

    		if(v2[i]>=max_val){
    			//debug(v2[i])
    			max_val=v2[i];
    			right=i;
    		}
    		else{
    			break;
    		}
    	}
    	ll left=index;
    	for(int i=index-1;i>=0;i--){

    		if(v1[i]<=min_val){
    			//debug(v1[i])
    			left=i;
    			min_val=v1[i];
    		}
    		else{
    			break;
    		}
    	}

    	//cout<<right<<" "<<max_val<<endl;
    	//cout<<left<<endl;
    	cout<<left+1<<" "<<right+1<<endl;


    	t--;
    }

    return 0;
}