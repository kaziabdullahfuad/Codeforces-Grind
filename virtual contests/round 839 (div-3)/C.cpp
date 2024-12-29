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


    	ll k,n;
    	cin>>k>>n;

    	if(k==n){

    		for(int i=1;i<=k;i++){
    			cout<<i<<" ";
    		}
    		cout<<endl;
    	}
    	else{

    		

    		vector<ll> v1(k);

    		ll start=1;
    		v1[k-1]=n;
    		ll ind=-1;
    		ll keep;
    		for(int i=k-2;i>=0;i--){

    			ll val=v1[i+1];

    			ll need=val-start;

    			if(need<=0){
    				//cout<<"HERE"<<endl;
    				ind=i;
    				keep=val-1;
    				break;
    			}
    			else{

    				// mane need>=1

    				ll remain=need-1;

    				if(remain>=i){

    					v1[i]=need;
    					start++;
    				}
    				else{

    					ind=i;
    					keep=val-1;
    					break;
    				}
    			}

    		}

    		// printVector(v1);
    		// debug(ind)
    		// debug(keep)

    		if(ind==-1){
    			printVector(v1);
    		}
    		else{

    			for(int i=ind;i>=0;i--){

	    			v1[i]=keep;
	    			keep--;
    			}

    			printVector(v1);
    		}
    		

    	}

    	t--;
    }

    return 0;
}