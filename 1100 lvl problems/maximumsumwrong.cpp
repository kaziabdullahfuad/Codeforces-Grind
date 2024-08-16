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
    	
    	sort(all(v1));

    	printVector(v1);

    	// 2 pointer bebohar kori
    	// greedy doesn't work
    	ll sum=accumulate(all(v1),0ll);

    	//cout<<sum<<endl;
    	ll left=0;
    	ll right=n-1;

    	while(k){

    		// first duita ba
    		// left
    		ll two_min=v1[left]+v1[left+1];
    		ll max_val=v1[right];

    		if(two_min<=max_val){
    			sum-=two_min;
    			left+=2;
    		}
    		else{
    			sum-=max_val;
    			right--;
    		}

    		k--;
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}