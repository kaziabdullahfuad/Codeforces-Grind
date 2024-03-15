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

    	ll a,b,l;
    	cin>>a>>b>>l;

    	// formula l=k*a^x*b*y
    	// find number of k
    	ll a_count=0;
    	ll b_count=0;

    	ll a_holder=a;
    	ll b_holder=b;
    	//debug(a_holder);
    	while(a_holder<=l){

    		a_holder*=a;
    		//debug(a_holder);
    		a_count++;
    	}

    	while(b_holder<=l){

    		b_holder*=b;
    		//debug(b_holder);
    		b_count++;
    	}

    	// cout<<a_holder<<" "<<a_count<<endl;

    	// cout<<b_holder<<" "<<b_count<<endl;
    	set<ll>::iterator it;
    	ll a_pow=0;
    	ll b_pow=0;
    	ll calculate=0;
    	ll divident=0;
    	ll ans=0;
    	set<ll> s1;
    	for(ll i=0;i<=a_count;i++){
    		a_pow=pow(a,i);
    		for(ll j=0;j<=b_count;j++){
    			b_pow=pow(b,j);
    			for(ll k=1;k*k<=l;k++){

    				//calculate=a_pow*b_pow*k;

    				if(l%k==0){

    					divident=l/k;

    					if(divident==k){

    						calculate=a_pow*b_pow*k;

    						if(calculate==l){
    							it=s1.find(k);
    							if(it==s1.end()){
				           			s1.insert(k);
				           			ans++;
				         		}
    							
    						}
    					}
    					else{

    						calculate=a_pow*b_pow*k;

    						if(calculate==l){
    							it=s1.find(k);
    							if(it==s1.end()){
				           			s1.insert(k);
				           			ans++;
				         		}
    							
    						}
    						calculate=a_pow*b_pow*divident;

    						if(calculate==l){
    							it=s1.find(divident);
    							if(it==s1.end()){
				           			s1.insert(divident);
				           			ans++;
				         		}
    							
    						}
    					}
    				}
    				// if(calculate==l){
    				// 	  // iterator to hold
       				// 	 it=s1.find(k); // returns iterator if present
        			// // otherwise returns s1.end()
				    //     if(it==s1.end()){
				    //        s1.insert(k);
				    //        ans++;
				    //     }
    				// }


    			}
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}