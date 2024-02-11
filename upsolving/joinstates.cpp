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
#define debug(x) cout<<#x<<" "<<x<<endl;
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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	ll current_sum=0;
    	ll count=0;
    	for(int i=0;i<n;i++){

    		current_sum+=v1[i];
    		// debug(current_sum);
    		// debug(count);
    		if(current_sum>=m){

    			count++;
    			current_sum=0;
    		}

    		// debug(current_sum);
    		// debug(count);
    	}

    	cout<<count<<endl;
    	

    	t--;
    }

    return 0;
}