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
    	
    	ll m;
    	cin>>m;
    	vector<ll> alpha(27,1000000005);

    	while(m){

    		string s;
    		cin>>s;
    		
    		//cout<<s<<endl;
    		ll len=s.size();
    		
    		bool found=true;
    		//printVector(alpha);
    		if(len==n){
    			
    			for(int i=0;i<27;i++){
    				alpha[i]=1000000005;
    			}

    			for(int i=0;i<n;i++){

    				//cout<<s[i]<<endl;
    				if(alpha[s[i]-'a']!=1000000005){

    					//cout<<"HERE"<<" "<<s[i]<<" "<<v1[i]<<endl;
    					
    					//cout<<alpha[s[i]-'a']<<endl;
    					ll val=alpha[s[i]-'a'];
    					//debug(val)
    					//debug(v1[i])
    					if(val!=v1[i]){
    						//cout<<val<<" "<<v1[i]<<endl;
    						found=false;
    						break;
    					}
    				}
    				else{

    					alpha[s[i]-'a']=v1[i];
    				}

    				//printVector(alpha);

    			}

    			if(found==false){
    				cout<<"NO"<<endl;
    			}
    			else{
    				cout<<"YES"<<endl;
    			}
    		}
    		else{

    			cout<<"NO"<<endl;
    		}

    		m--;
    	}
    

    	t--;
    }

    return 0;
}