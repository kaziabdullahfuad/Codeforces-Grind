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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1){
    		cout<<1<<endl;
    	}
    	else{

    		// first find the contrast
    		ll st_cont=0;
    		//sort(all(v1));
    		for(int i=0;i<n-1;i++){

    			ll temp=abs(v1[i]-v1[i+1]);
    			//debug(temp)
    			st_cont+=temp;
    		}

    		//cout<<st_cont<<endl;
    		//st_cont=12;

    		if(st_cont==0){
    			cout<<1<<endl;
    		}
    		else{

	    		ll state=0,res=0;

	    		for(int i=1;i<n;i++){

	    			if(v1[i]<v1[i-1] && state!=-1){
	    				// state -1 for descencing order
	    				// and ata descending order a
	    				state=-1;
	    				//cout<<i<<" "<<v1[i]<<" "<<state<<endl;
	    				res++;
	    				
	    			}
	    			else if(v1[i]>v1[i-1] && state!=1){

	    				// state 1 for ascending order
	    				// and ata ascending order a
	    				state=1;
	    				//cout<<i<<" "<<v1[i]<<" "<<state<<endl;
	    				
	    				res++;
	    			}
	    		}

	    		res++;
	    		cout<<res<<endl;
    		}
    		
    	}

    	t--;
    }

    return 0;
}