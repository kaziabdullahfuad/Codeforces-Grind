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

    	ll n,m,k;
    	cin>>n>>m>>k;

    	string s;
    	cin>>s;

    	ll zero=0;
    	ll one=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='1'){
    			one++;
    		}
    		else{
    			zero++;
    		}
    	}

    	if(m==1 && k==1){

    		cout<<zero<<endl;
    	}
    	else{

    		ll start=0;
    		ll count=0;
    		//cout<<s<<endl;
    		for(int i=0;i<n;i++){

    			//debug(i)
    			if(s[i]=='0'){

    				ll ind=i;
    				//debug(i)
    				//start++;
    				//debug(ind)
    				//debug(start)
    				while(ind<n && s[ind]=='0'){

    					
    					start++;
    					//debug(ind)
    					//debug(start)
    					if(start==m){

    						//mane 3 ta ekshathe hoye gese
    						//debug(start)
    						//debug(ind)
    						count++;
    						ll temp=ind;
    						ll valer=0;
    						while(temp<n && valer<k){

    							s[temp]='1';
    							temp++;
    							valer++;
    						}

    						temp--;
    						ind=temp;
    						// cout<<"HERE IND"<<endl;
    						// debug(temp)
    						// debug(ind)
    						start=0;
    					}

    					ind++;
    				}

    				ind--;
    				i=ind;
    				// cout<<"HERE I val"<<endl;
    				// debug(ind)
    				// debug(i)
    			}
    			else{

    				start=0;
    			}
    		}

    		//cout<<s<<endl;
    		cout<<count<<endl;
    	}

    	t--;
    }

    return 0;
}