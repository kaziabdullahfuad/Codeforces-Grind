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

    	//cout<<"Bismillah"<<endl;

    	ll n,x,y;
    	cin>>n>>x>>y;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll sum=accumulate(all(v1),0ll);
    	debug(sum)

    	if(sum<=x){

    		cout<<0<<endl;
    	}
    	else{

    		// range calculate
    		ll l=sum-x;
    		ll r=sum-y;
    		debug(l)
    		debug(r)

    		sort(all(v1));

    		printVector(v1);

    		for(int i=0;i<n;i++){

    			if(v1[i]>=l){
    				break;
    			}
    			else{

    				if(v1[i]>=r && v1[i]<=l){

    					// range ar moddhe ase tahole khujbo

    				}
    				else{
    					
    				}
    			}
    		}
    	}

    	t--;
    }

    return 0;
}