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

    	if((n%4!=0) && (n%6!=0)){

    		cout<<-1<<endl;
    	}
    	else if(n%2==1){
    		cout<<-1<<endl;
    	}
    	else{

    		// take as many min as you can
    		// jodi 6 diyye direct divide jai tahole oitai min
    		// otherwise ektu ektu barai dekhbo 6 diye divide and 4 diye divide hoi ki na
    		ll min_val=1e18;

    		if(n%6==0){
    			min_val=n/6;
    		}
    		else{

    			ll holder=n;
    			ll counter=1;
    			ll val=6;
    			while(val<n){

    				val=6*counter;
    				if(val>n){
    					break;
    				}
    				ll remain=n-val;
    				debug(val) debug(counter) debug(remain)
    				if(remain%4==0){
    					min_val=min(min_val,counter+(remain/4));
    				}
    				counter++;

    			}
    			//cout<<min_val<<endl;


    		}

    		ll max_val=-1;

    	if(n%4==0){
    		max_val=n/4;
    	}
    	else{

    			ll holder=n;
    			ll counter=1;
    			ll val=4;
    			while(val<n){

    				val=4*counter;
    				if(val>n){
    					break;
    				}
    				ll remain=n-val;
    				//debug(val) debug(counter) debug(remain)
    				if(remain%4==0){
    					max_val=min(max_val,counter+(remain/6));
    				}
    				counter++;

    			}
    			cout<<max_val<<endl;

    	}
    	if(min_val==1e18){
    		min_val=max_val;
    	}
    	else if(max_val==-1){
    		max_val=min_val;
    	}

    	cout<<min_val<<" "<<max_val<<endl;
    
    }

    	

    	//cout<<min_val;

    	t--;
    }

    return 0;
}