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

    	// n=size,m=jump size,k=can swim for how long
    	ll n,m,k;
    	cin>>n>>m>>k;

    	string s;
    	cin>>s;

    	// priority furthest log>water>croc

    	if(m>n){

    		cout<<"YES"<<endl;
    	}
    	else{
    		bool log=false;
    		bool water=false;
    		ll index=0;
    		for(int i=0;i<m;i++){
    			if(s[i]=='L'){
    				log=true;
    				index=i;
    			}
    			else if(s[i]=='W' && log==false){
    				index=i;
    			}
    			else if(s[i]=='C' && log==false && water==false){
    				index=i;
    			}
    		}
    		// jumping can only be done from logs
    		// when in water continuously swim till log found
    		bool found=true;
    		
    		if(s[index]=='C'){
    			found=false;
    		}
    		else if(s[index]=='W'){
    			k--;
    		}
    		//cout<<index<<endl;
    		index++;
    		//debug(index)
    		if(k<0){
    			found=false;
    		}
    		//cout<<k<<endl;
    		for(int i=index;i<n;i++){

    			if(k<0){
    				found=false;
    				break;
    			}
    			if(i+m-1>=n){
    				//cout<<"HELLO "<<i+m<<endl;
    				break;
    			}
    			bool log=false;
    			bool water=false;
    			ll hold=i;
    			index=i;
    			//debug(i+m)
    			for(int j=i;j<i+m;j++){
    				//cout<<"HERE"<<" "<<s[j]<<endl;
	    			if(s[j]=='L'){
	    				log=true;
	    				index=j;
	    			}
	    			else if(s[j]=='W' && log==false){
	    				water=true;
	    				index=j;
	    			}
	    			else if(s[j]=='C' && log==false && water==false){
	    				index=j;
	    			}
    			}
    			//debug(index)
    			//debug(s[index])
    			if(log==false && water==false){
    				// maane crocodile
    				found=false;
    				break;
    			}
    			else if(s[index]=='W'){
    				k--;
    				index++;
    				while(index<n){

    					if(s[index]=='L'){

    						break;
    					}
    					else if(s[index]=='W'){
    						k--;
    					}
    					else{
    						// croc
    						found=false;
    						break;
    					}
    					index++;
    				}
    			}
    			if(k<0){
    				found=false;
    				break;
    			}
    			//cout<<"AFTER op: "<<index<<endl;
    			// i+1 kore next index a jabe.
    			i=index;

    		}

    		if(found){
    			cout<<k<<endl;
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}