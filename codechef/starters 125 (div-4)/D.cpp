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

    	ll n,k;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	ll no_one=0;
    	ll no_zero=0;
    	for(int i=0;i<n;i++){

    		if(s[i]=='1'){
    			no_one++;
    		}
    		else{
    			no_zero++;
    		}
    	}

    	if(no_one==0){

    		string ans="";

    		for(int i=0;i<n-k;i++){
    			ans.push_back(s[i]);
    		}

    		cout<<ans<<endl;
    	}
    	else if(no_zero==0){
    		string ans="";

    			int count=0;
    			//cout<<k<<endl;
    			for(int i=0;i<n;i++){

    				if(s[i]=='1' && count<k){
    					//debug(count)
    					count++;
    					continue;
    				}
    				else{
    					ans.push_back(s[i]);
    				}
    			}
    			//cout<<count<<endl;
    			cout<<ans<<endl;
    	}
    	else{
    		//cout<<"ASCHE"<<endl;

    		// first zero koi and k ki no of ones theke boro naki choto
    		ll first_zero=-1;

    		for(int i=0;i<n;i++){

    			if(s[i]=='0'){
    				first_zero=i;
    				break;
    			}
    		}

    		if(first_zero!=0){

    			// that means firse zero poriman 1 ase
    			string ans="";
    			if(k==first_zero){

    				for(int i=first_zero;i<n;i++){
    					ans+=s[i];
    				}
    				cout<<ans<<endl;
    			}
    			else if(k<first_zero){

    				// convert kora lagbe beginning 1 gula

    				ll count=0;

    				for(int i=0;i<n;i++){

    					if(s[i]==1 && count<k){
    						count++;
    						s[i]='0';
    					}
    				}
    				cout<<s<<endl;
    			}
    			else if(k>first_zero){

    				// first ar gula remove plus porer gula remove

    				if(k==no_one){
    					string ans="";
    					for(int i=0;i<n;i++){
    						if(s[i]=='0'){
    							ans.push_back(s[i]);
    						}
    					}
    					cout<<ans<<endl;
    				}
    				else if(k>no_one){
    					// tahole first ar gula 1 
    					// 1 remove
    					// zero remove
    					//cout<<"K>No one"<<endl;
    					string ans="";
    					int count=0;
    					for(int i=0;i<first_zero;i++){

    						ans.push_back('0');
    						//cout<<"HELLO"<<endl;
    						count++;
    					}
    					//no_one-=count;
    					int len=k-(no_one);
    					//cout<<len<<endl;
    					//cout<<first_zero<<endl;
    					for(int i=first_zero;i<n-len;i++){

    						if(s[i]!='1'){
    							ans.push_back(s[i]);
    						}
    						//debug(i)
    					}
    					cout<<ans<<endl;
    				}
    				else{

    					string ans="";
    					int count=0;
    					for(int i=0;i<first_zero;i++){

    						ans.push_back('0');
    						count++;
    					}

    					//k-=count;
    					//cout<<k<<endl;
    					//cout<<ans<<endl;

    					for(int i=first_zero;i<n;i++){

    						if(s[i]=='1' && count<k){
    							count++;
    							continue;
    						}
    						else{
    							ans.push_back(s[i]);
    						}
    					}
    					//cout<<ans.size()<<endl;
    					cout<<ans<<endl;


    				}
    			}
    		}
    		else{


    		if(no_one>=k){

    			string ans="";

    			int count=0;
    			//cout<<k<<endl;
    			for(int i=0;i<n;i++){

    				if(s[i]=='1' && count<k){
    					//debug(count)
    					count++;
    					continue;
    				}
    				else{
    					ans.push_back(s[i]);
    				}
    			}
    			//cout<<count<<endl;
    			cout<<ans<<endl;
    		}
    		else{
    			//cout<<"KASHI"<<endl;
    			int len=k-no_one;
    			//debug(len)
    			ll count=0;
    			string ans="";
    			for(int i=0;i<n-len;i++){

    				if(s[i]=='1' && count<no_one){
    					count++;
    					continue;
    				}
    				else{

    					ans.push_back(s[i]);
    				}
    			}
    			//cout<<ans.size()<<endl;
    			cout<<ans<<endl;


    		}
    	}
    }

    	t--;
    }

    return 0;
}