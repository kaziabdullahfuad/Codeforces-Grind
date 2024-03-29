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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	sort(all(v1));

    	if(n==1){
    		cout<<1<<endl;
    	}
    	else if(n%2==0){

    		ll mid=(n/2)-1;
    		ll original_median=v1[mid];
    		ll mid_val=v1[mid];
    		ll count=1;
    		for(ll i=mid+1;i<n;i++){

    			if(v1[i]==original_median){
    				count++;
    			}
    		}
    		cout<<count<<endl;
    	}
    	else if(n%2!=0){

    		ll mid=(n/2);
    		ll original_median=v1[mid];
    		//debug(mid)
    		ll mid_val=v1[mid];
    		ll left_val=v1[mid-1];
    		ll right_val=v1[mid+1];
    		ll count=1;
    		for(ll i=mid+1;i<n;i++){

    			if(v1[i]==original_median){
    				count++;
    			}
    		}
    		cout<<count<<endl;

    	}

    	t--;
    }

    return 0;
}