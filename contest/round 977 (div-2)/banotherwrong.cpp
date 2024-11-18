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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    		
    	// first find the mex without any operations
    	// then see if you can make any value close to mex

    	int max_val=*max_element(all(v1));

    	//cout<<max_val<<endl;

    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	ll initial_mex=0;
    	//debug(max_val)
    	max_val+=5;
    	for(int i=0;i<=max_val;i++){

    		if(m1.count(i)){

    		}
    		else{

    			initial_mex=i;
    			break;
    		}
    	}



    	//cout<<initial_mex<<endl;

    	// now dekhbo increase kora jai ki na


    	// ar age dekhbo min_val+x < mex or min_val+x >mex tahole hobe na

    	int min_val=*min_element(all(v1));

    	//debug(min_val)
    	if((min_val>initial_mex)){

    		cout<<initial_mex<<endl;
    	}
    	else if(x==1){


    		for(auto y:m1){

    			//cout<<y.first<<" "<<y.second<<endl;
    			if(y.second>=2){

    				ll temp=y.second;
    				initial_mex+=(temp-1);
    			}
    		}

    		cout<<initial_mex<<endl;
    	}
    	else{

    		debug(initial_mex)
    		map<ll,ll> m2; // for modulus
    		vector<ll> v2=v1;
    		for(auto y:m1){

	    		if(y.second>=2){
	    			ll temp=y.second;

	    			temp--;
	    			cout<<y.first<<" "<<temp<<endl;
	    			debug(y.first%x)
	    			m2[y.first%x]+=temp;


	    		}
    		}
    		cout<<"HERE"<<endl;
    		for(auto y: m2){

    			cout<<y.first<<" "<<y.second<<endl;
    		}

    		//cout<<initial_mex<<endl;	
    		//cout<<"EKHANE"<<endl;
    		//debug(initial_mex)
    		while(true){
				
				//cout<<initial_mex%x<<endl;
				//cout<<m2[initial_mex%x]<<endl;    			
    			if(m2[initial_mex%x]>=1){

    				initial_mex++;
    				m2[initial_mex%x]--;
    			}
    			else{
    				break;
    			}
    		}

    		//debug(initial_mex)
    		cout<<initial_mex<<endl;

    		// cout<<"HERE"<<endl;
    		// for(auto y: m2){

    		// 	//cout<<y.first<<" "<<y.second<<endl;
    		// }

    	}
    	



    	t--;
    }

    return 0;
}