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

    	ll n,k;
    	cin>>n>>k;

    	if(k%2!=0){

    		// 2x-1=k
    		// if k=3, then (3+1)/2=2 pairs
    		// so highest 2*2=4, 1234 so 1+2=odd,2+3=odd,3+4=odd
    		ll pairs=(k+1)/2;
    		//cout<<pairs<<endl;
    		ll highest=pairs+pairs;

    		//cout<<highest<<endl;
    		ll odd=highest+1;
    		ll even=highest+2;

    		while(odd<=n){
    			cout<<odd<<" ";
    			odd+=2;
    		}

    		for(ll i=1;i<=highest;i++){
    			cout<<i<<" ";
    		}

    		while(even<=n){
    			cout<<even<<" ";
    			even+=2;
    		}


    	}
    	else{

    		ll pairs=(k)/2;
    		//cout<<pairs<<endl;
    		ll highest=pairs+pairs;

    		//cout<<highest<<endl;
    		ll odd=highest+1;
    		ll extra_odd=odd+2;
    		ll even=highest+2;

    		while(extra_odd<=n){
    			cout<<extra_odd<<" ";
    			extra_odd+=2;
    		}

    		for(ll i=1;i<=highest;i++){
    			cout<<i<<" ";
    		}

    		while(even<=n){
    			cout<<even<<" ";
    			even+=2;
    		}
    		cout<<odd<<endl;
    	}
    	cout<<endl;

    	t--;
    }

    return 0;
}