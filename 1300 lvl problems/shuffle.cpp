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

    	ll n,x,m;
    	cin>>n>>x>>m;
    	ll max_val=1;
    	// think of starting two ranges
    	ll sl=x;
    	ll er=x;
    	while(m){

    		ll l,r;
    		cin>>l>>r;

    		// check if there is intersection
    		ll left=max(l,sl);
    		ll right=min(r,er);
    		// cout<<l<<" "<<r<<endl;
    		// debug(left)
    		// debug(right)
    		if(left>right){
    			//cout<<"NO Intersection"<<endl;
    		}
    		else{
    			// intersection ase
    			//cout<<"Intersection ase so new range"<<endl;
    			sl=min(sl,l);
    			er=max(er,r);
    			max_val=er-sl+1;
    			//cout<<sl<<" "<<er<<endl;
    		}

    		m--;
    	}

    	cout<<max_val<<endl;


    	t--;
    }

    return 0;
}