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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	printVector(v1);

    	ll left=0;

    	ll sum=0;
    	ll count=0;
    	for(int i=0;i<n;i++){

    		sum+=v1[i];

    		if(sum==k){
    			debug(sum)
    			debug(i)
    			sum-=v1[left];
    			left++;
    			count++;
    		}
    		else if(sum>k){

    			while(sum>k){

    				sum-=v1[left];
    				left++;
    			}

    			if(sum==k){
    				debug(sum)
    				debug(i)
    				count++;
    			}
    		}
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}