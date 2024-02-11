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

    	
    	ll x;
    	cin>>x;
    	ll min_val=1e18;
    	ll hold=0;
    	ll hold_two=x;
    	for(ll i=0;i<=x-1;i++){

    		for(ll j=i+1;j<=x;j++){

    			if((i^j)==x){

    				//cout<<i<<" "<<j<<" ";
    				if(abs(i-j)<min_val){
    					hold=i;
    					hold_two=j;
    				}
    			}
    		}
    	}
    	//cout<<endl;
    	cout<<hold<<" "<<hold_two<<endl;

    	

    	t--;
    }

    return 0;
}