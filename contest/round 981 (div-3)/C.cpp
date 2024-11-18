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
    	vector<ll> v1(n+1);
    	
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}
    	
    	ll count=0;
    	for(int i=1;i<=n/2;i++){

    		// swap korbo ki na

    		// without swapping
    		ll cur=v1[i];
    		ll ano=v1[n-i+1];
    		ll index=n-i+1;
    		ll val1=0;
    		ll val2=0;
    		//debug(i)
    		//cout<<cur<<" "<<ano<<endl;
    		if(abs(index-i)==1){

    			if(ano==cur){
    				val1++;
    			}
    			count+=val1;
    		}
    		else if(cur==ano){

    			if(v1[i]==v1[i+1]){
    				val1++;
    			}
    			if(v1[index]==v1[index-1]){
    				val1++;
    			}

    			count+=val1;
    		}
    		else{

    			// first no swaps
    			if(v1[i]==v1[i+1]){
    				val1++;
    			}
    			if(v1[index]==v1[index-1]){
    				val1++;
    			}

    			if(ano==v1[i+1]){
    				val2++;
    			}

    			if(cur==v1[index-1]){
    				val2++;
    			}

    			//debug(val1)
    			//debug(val2)

    			if(val1<=val2){

    				// dont swap
    				count+=val1;
    			}
    			else{

    				count+=val2;
    				swap(v1[i],v1[index]);
    			}

    		}
    	}

    	cout<<count<<endl;
    	

    	t--;
    }

    return 0;
}